#include <stdio.h>

int main() {
  int n, j, i, num;

  scanf("%d", &n);
  int arr[n];
  for (i = 0; i<n; ++i) {
    scanf("%d", &arr[i]);
  }

  printf("Enter the number you want to insert into the array. ");
  scanf("%d", &num);
  n = n+1;
  arr[i] = num;
  arr[i+1] = '\0';
  for (i=0; i<n; ++i) {
    printf("%d ", arr[i]);
  }


}
