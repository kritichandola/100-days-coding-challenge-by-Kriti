/*Find the missing number using an optimized approach.*/
#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int actualSum = 0;

    printf("Enter the elements:\n");

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        actualSum += arr[i];
    }

    int expectedSum = n * (n + 1) / 2;
    int missing = expectedSum - actualSum;

    printf("Missing number is %d", missing);

    return 0;
}