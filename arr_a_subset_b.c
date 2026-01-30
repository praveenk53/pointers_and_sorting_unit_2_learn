#include <stdio.h>

int main() {
    int A[10], B[10];
    int n, m, i, j, found;

    // Input size of arrays
    printf("Enter size of array A: ");
    scanf("%d", &n);
    printf("Enter elements of array A:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter size of array B: ");
    scanf("%d", &m);
    printf("Enter elements of array B:\n");
    for (i = 0; i < m; i++) {
        scanf("%d", &B[i]);
    }

    // Check if A is subset of B
    for (i = 0; i < n; i++) {
        found = 0;
        for (j = 0; j < m; j++) {
            if (A[i] == B[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("Array A is NOT a subset of Array B\n");
            return 0;
        }
    }

    printf("Array A is a subset of Array B\n");
    return 0;
}