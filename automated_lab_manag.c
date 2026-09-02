#include <stdio.h>
#include <string.h>

struct student_info
{
    char student_name[100];
    double lab_scores[3];
    double average_score;
};

int main() {
    int n;
    printf("Enter the number of students: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input.\n");
        return 1;
    }

    struct student_info students[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter name of student %d: ", i + 1);
        scanf("%99s", students[i].student_name);

        double sum = 0.0;
        printf("Enter 3 lab scores for %s:\n", students[i].student_name);
        for (int j = 0; j < 3; j++) {
            printf("  Lab %d score: ", j + 1);
            scanf("%lf", &students[i].lab_scores[j]);
            sum += students[i].lab_scores[j];
        }
        students[i].average_score = sum / 3.0;
    }

    printf("\nAUTOMATED LAB MANAGEMENT REPORT\n");
    printf("%-5s %-20s %-20s %-15s\n", "ID", "Student Name", "Lab Scores", "Average Score");
    for (int i = 0; i < n; i++) {
        printf("%-5d %-20s [%.1f, %.1f, %.1f]      %-15.2f\n",
               i + 1,
               students[i].student_name,
               students[i].lab_scores[0],
               students[i].lab_scores[1],
               students[i].lab_scores[2],
               students[i].average_score);
    }

    return 0;
}