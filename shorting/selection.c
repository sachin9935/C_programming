#include <stdio.h>
#include <limits.h>

int main() {
    int arr[7] = {7, 4, 5, 9, 8, 2, 1};
    int n = 7;

    printf("Old array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Selection Sort
    for (int i = 0; i < n - 1; i++) {
        int min = INT_MAX;
        int minIdx = -1;
        for (int j = i; j < n; j++) {
            if (min > arr[j]) {
                min = arr[j];
                minIdx = j;
            }
        }
        // Swap the found minimum element with the first element
        int temp = arr[minIdx];
        arr[minIdx] = arr[i];
        arr[i] = temp;
    }

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
