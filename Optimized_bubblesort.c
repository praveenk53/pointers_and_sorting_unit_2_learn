#include <stdio.h>

void bubbleSortOptimized(int arr[], int n) {
    int i, j, temp;
    int swapped;

    for (i = 0; i < n-1; i++) {
        swapped = 0;  // reset flag for each pass

        // inner loop
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // swap
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = 1;
            }
        }


        if (swapped == 0) {
            printf("Array sorted at pass %d\n", i+1);
            break;
        }
    }
}

int main() {
    int arr[] = {3, 1, 2, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    bubbleSortOptimized(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}