#include <stdio.h>

void avg_sum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    float average = (float)sum / n;
    printf("The average is %.2f\n", average);
    printf("The sum is %d\n", sum);
}

void larg_and_small(int arr[], int n)
{
    if (n <= 0)
        return;
    int min = arr[0];
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
    printf("The smallest number is %d and the largest number is %d\n", min, max);
}

void rev_odr(int arr[], int n)
{
    printf("Array in reverse order: ");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void print_addresses(int arr[], int n)
{
    printf("\nMemory addresses of array elements:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Element %d (Value: %d) -> Address: %p\n", i + 1, arr[i], (void *)&arr[i]);
    }
}
void mem_add_usar_inpt(int arr[] , int n)
{
    for (int i = 0; i <= 3; i++)
    {
        printf("Enter your %dth elements", i);
        scanf("%d", &arr[i]);
    }
    printf("\nYour array is: [ ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
        printf("Your %dth element is %d", i, arr[i]);
    }
    printf("]\n\n");
    printf("Your memory address of the base element is : %p\n", (void *)&arr[0]);

    for (int i = 0; i <= 3; i++)
    {
        printf("Your %dth element is %d", i, arr[i]);
    }
    
}

int main()
{
    int n;
    printf("Enter how many elements you want to enter: ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("Invalid input.\n");
        return 1;
    }

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nYour array is: [ ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("]\n\n");

    avg_sum(arr, n);
    larg_and_small(arr, n);
    rev_odr(arr, n);
    print_addresses(arr, n);

    return 0;
}
