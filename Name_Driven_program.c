#include <stdio.h>
#include <stdlib.h>

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


int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n-1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) return mid;
        else if (arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}


void displayReverse(int *arr, int n) {
    int *ptr = arr + n - 1;
    for (int i = 0; i < n; i++, ptr--) {
        printf("%d ", *ptr);
    }
    printf("\n");
}

int main() {
    int arr[50], n, choice, key;
    scanf("%d", &n);              // number of elements
    for (int i = 0; i < n; i++)   // input array
        scanf("%d", &arr[i]);

    while (1) {
        scanf("%d", &choice);
        switch (choice) {
            case 1: bubbleSort(arr, n); break;
            case 2: scanf("%d", &key);
                    int pos = binarySearch(arr, n, key);
                    printf("%d\n", pos); break;
            case 3: displayReverse(arr, n); break;
            case 4: exit(0);
        }
    }
    return 0;
}