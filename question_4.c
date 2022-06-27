#include <stdio.h>
#include <limits.h>

int main() {
  int n, i, j, min = INT_MAX, max = INT_MIN ;
  printf("Enter the size of the array:\n");
  scanf("%d", &n);
  int arr[n];

  for (i=0; i<n; ++i) {
    scanf("%d", &arr[i]);
    if (arr[i] < min) min = arr[i];
    if (arr[i] > max) max = arr[i];
  }

  for (i = 0; i<n; ++i) {
    if (arr[i] == max) {
      arr[i] = min;
    }
    else if (arr[i] == min) {
      arr[i] = max;
    }
  }

  for (i=0; i<n; ++i) {
    printf("%d ", arr[i]);
  }
  printf("\n");



}
