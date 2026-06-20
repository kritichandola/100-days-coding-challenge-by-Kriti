#include <stdio.h>

int main() {
    int n1, n2;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    int a[n1];

    printf("Enter elements of first array:\n");
    for(int i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int b[n2];

    printf("Enter elements of second array:\n");
    for(int i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    printf("Union: ");

    // Print elements of first array without duplicates
    for(int i = 0; i < n1; i++) {
        if(i == 0 || a[i] != a[i - 1])
            printf("%d ", a[i]);
    }

    // Print elements of second array not present in first
    for(int i = 0; i < n2; i++) {

        int found = 0;

        for(int j = 0; j < n1; j++) {
            if(b[i] == a[j]) {
                found = 1;
                break;
            }
        }

        if(found == 0) {
            if(i == 0 || b[i] != b[i - 1])
                printf("%d ", b[i]);
        }
    }

    return 0;
}