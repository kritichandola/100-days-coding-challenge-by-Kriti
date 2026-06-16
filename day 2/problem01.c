// Find the largest element in an array using an optimized approach.
#include <stdio.h>

int main () {
int n;

printf("Enter the size of array:");
scanf("%d",&n);

int arr[n];

printf("Enter the elements:\n");

for(int i = 0; i < n ; i++) {
  scanf("%d",&arr[i]);
}

int largest = arr[0];

for(int i = 1; i < n; i++) {
  if(arr[i] > largest){
    largest = arr[i];
  }
}
printf("Largest element is %d", largest);

return 0;
}