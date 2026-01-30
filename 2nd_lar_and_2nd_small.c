#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = INT_MIN, secondLargest = INT_MIN;
    int smallest = INT_MAX, secondSmallest = INT_MAX;

    for (int i = 0; i < n; i++) {
        int num = arr[i];

        // Update largest and second largest
        if (num > largest) {
            secondLargest = largest;
            largest = num;
        } else if (num > secondLargest && num != largest) {
            secondLargest = num;
        }

        // Update smallest and second smallest
        if (num < smallest) {
            secondSmallest = smallest;
            smallest = num;
        } else if (num < secondSmallest && num != smallest) {
            secondSmallest = num;
        }
    }

    if (secondLargest == INT_MIN)
        printf("No second largest element\n");
    else
        printf("Second largest element: %d\n", secondLargest);

    if (secondSmallest == INT_MAX)
        printf("No second smallest element\n");
    else
        printf("Second smallest element: %d\n", secondSmallest);

    return 0;
}