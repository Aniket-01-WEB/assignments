#include <stdio.h>

void print_array(int arr[], int size)
{
    for (int i = 0; i <= size - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubble_sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void selection_sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minindex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minindex])
            {
                minindex = j;
            }
        }
        int temp = arr[minindex];
        arr[minindex] = arr[i];
        arr[i] = temp;
    }
}

void insertion_sort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int original[5] = {22, 55, 11, 44, 33};
    int n = 5;

    int arr1[5];
    for (int i = 0; i < n; i++)
    {
        arr1[i] = original[i];
    }

    bubble_sort(arr1, n);
    printf("Bubble Sort:    ");
    print_array(arr1, n);

    int arr2[5];
    for (int i = 0; i < n; i++)
    {
        arr2[i] = original[i];
    }

    selection_sort(arr2, n);
    printf("Selection Sort: ");
    print_array(arr2, n);

    int arr3[5];
    for (int i = 0; i < n; i++)
    {
        arr3[i] = original[i];
    }

    insertion_sort(arr3, n);
    printf("Insertion Sort: ");
    print_array(arr3, n);

    return 0;
}