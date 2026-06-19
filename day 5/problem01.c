#include <stdio.h>

int main() {
    int n;

    printf("Enter size of arrays: ");
    scanf("%d", &n);

    int a[n], b[n];

    printf("Enter elements of first array:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter elements of second array:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    int count = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(a[i] == b[j]) {
                count++;
                break;
            }
        }
    }

    if(count == n)
        printf("true");
    else
        printf("false");

    return 0;
}