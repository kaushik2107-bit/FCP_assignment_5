#include <stdio.h>

int main() {
  int n, i, j, m;
  float sum=0;
  printf("Enter the size of the array\n");
  scanf("%d", &n);
  int arr0[n];
  int arr1[n];
  int arr2[n];

  for (i=0;i<n; ++i) {
    scanf("%d", &arr0[i]);
  }
  for (i=0;i<n; ++i) {
    scanf("%d", &arr1[i]);
  }

  for (i=0;i<n; ++i) {
    arr2[i] = arr0[i] + arr1[i];
    sum += arr2[i];
  }

  for (i=0;i<n; ++i) {
    printf("%d ", arr2[i]);
  }
  printf("\n");
  printf("The average of the third arary: %f\n", sum/n);

}
