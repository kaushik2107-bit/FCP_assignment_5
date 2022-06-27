#include <stdio.h>

int main() {
  int n, j, i, num, index, tmp, tmp1;
  printf("Enter the size of the array:\n");
  scanf("%d", &n);
  int arr[n];
  for (i = 0; i<n; ++i) {
    scanf("%d", &arr[i]);
  }

  printf("Enter the number you want to insert into the array. ");
  scanf("%d", &num);
  printf("Enter the position at which you want to enter the element: ");
  scanf("%d", &index);
  n = n+1;

  tmp = arr[index-1];
  arr[index-1] = num;

  for (j=index; j<n; ++j) {
    tmp1 = arr[j];
    arr[j] = tmp;
    tmp = tmp1;
  }

  for (i=0; i<n; ++i) {
    printf("%d ", arr[i]);
  }
  printf("\n");


}
