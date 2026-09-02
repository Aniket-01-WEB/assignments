#include<stdio.h>
int main(){
    int a,c,i,k,x,z;

    printf("Enter Employee 1 ID: ");
    scanf("%d",&i);
    printf("Enter Employee 1 salary: ");
    scanf("%d",&k);

    printf("Enter Employee 2 ID: ");
    scanf("%d",&a);
    printf("Enter Employee 2 salary: ");
    scanf("%d",&c);
    printf("Enter Employee 3 ID: ");
    scanf("%d",&x);
    printf("Enter Employee 3 salary: ");
    scanf("%d",&z);
    if (k > c && k > z) {
        printf("Highest salary is %d\n", k);
    }
    else if (c > k && c > z) {
        printf("Highest salary is %d\n", c);
    }
    else {
        printf("Highest salary is %d\n", z);
    }

    return 0;
}