#include <stdio.h>

int main() {
  int n, i, j, m;
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
  }

  for (i=0;i<n; ++i) {
    printf("%d ", arr2[i]);
  }
  printf("\n");

}
