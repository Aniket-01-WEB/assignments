#include <stdio.h>

int main() {
    int arr[] = {56,34,12,6,42,5};
    int n = 6;
    int temp;

    // Bubble Sort
    for (int i = 0; i <= n - 1; i++) {
        for (int j = 0; j <= n - 1; j++) {

            if (arr[j] > arr[j + 1]) {
                // Swap
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print sorted array
    printf("Sorted array: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}