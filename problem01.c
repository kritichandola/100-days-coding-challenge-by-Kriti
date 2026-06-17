#include <stdio.h>
 
int main() {
int n, target,count = 0;

printf("Enter size of array:");
scanf("%d",&n);

int arr[n];

printf("Enter the elemnts:");
for(int i = 0; i < n; i++){
scanf("%d",&arr[i]);
}
printf("Enter target:");
scanf("%d",&target);

for(int i = 0; i < n; i++){
  if(arr[i]== target) {
    count ++;
  }
}
printf("Number of occurences = %d", count);

return 0;
}