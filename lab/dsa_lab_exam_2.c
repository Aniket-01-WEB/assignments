#include <stdio.h>

int linearSearch(int rollNumbers[], int n, int rollNumber) {
    for (int i = 0; i < n; i++) {
        if (rollNumbers[i] == rollNumber) {
            return i;  
        }
    }
    return -1;  
}

int main() {
    int n, rollNumber;

    printf("Enter number of enrolled students: ");
    scanf("%d", &n);

    int rollNumbers[n];

    printf("Enter roll numbers:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &rollNumbers[i]);
    }

    printf("Enter roll number to search: ");
    scanf("%d", &rollNumber);

    int result = linearSearch(rollNumbers, n, rollNumber);

    if (result != -1) {
        printf("Student found at position %d.\n", result + 1);
        printf("Attendance marked successfully.\n");
    } else {
        printf("Student with roll number %d is not enrolled.\n", rollNumber);
    }

    return 0;
}