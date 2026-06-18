// Rotate the given array by k steps using an optimized approach.
#include <stdio.h>

int main() {
    int n, k;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n], temp[n];

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    k = k % n;

    for(int i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }

    printf("Rotated array: ");

    for(int i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }

    return 0;
}