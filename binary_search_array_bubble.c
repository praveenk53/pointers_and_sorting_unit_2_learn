#include <stdio.h>
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int binarySearchClosest(int arr[], int n, int key) {
    int low = 0, high = n-1;
    int mid;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            return mid;
        }
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    printf("Element %d not found.\n", key);

    if (high >= 0)
        printf("Closest smaller element: %d\n", arr[high]);
    else
        printf("No smaller element exists.\n");

    if (low < n)
        printf("Closest larger element: %d\n", arr[low]);
    else
        printf("No larger element exists.\n");

    return -1;
}

int main() {
    int arr[] = {34, 12, 9, 56, 27, 89, 45};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key;

    bubbleSort(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    printf("Enter element to search: ");
    scanf("%d", &key);

    int result = binarySearchClosest(arr, n, key);
    if (result != -1)
        printf("Element %d found at index %d\n", key, result);

    printf("Smallest element: %d\n", arr[0]);
    printf("Largest element: %d\n", arr[n-1]);

    return 0;
}