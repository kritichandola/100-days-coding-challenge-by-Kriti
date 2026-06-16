#include <stdio.h>

int sum(int arr[],int size);

int main() {
  int n;

  printf("Welcome to Sum of Array\n");
  printf("Enter the size of array:");
  scanf("%d",&n);

  int arr[n];

  for(int i = 0; i < n; i++) {
    printf("Please enter the %dth element:",i + 1);
    scanf("%d",&arr[i]);
  }

  int addition = sum(arr,n);

  printf("The sum of the numbers is %d", addition);

  return 0;
  
}

int sum(int arr[],int size) {
  int total = 0;

  for(int i = 0; i < size; i++) {
    total += arr[i];
  }
  return total;
}
