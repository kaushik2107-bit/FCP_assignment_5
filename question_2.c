#include <stdio.h>

int main() {
  int n, i, j, k;
  scanf("%d", &n);
  int arr[n];
  for (i = 0; i<n; ++i) {
    scanf("%d", &arr[i]);
  }

  for (i=0; i<n; ++i) {
    for (j=i; j<n; ++j) {
      if (arr[i] < arr[j]) {
        int tmp0 = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp0;
      }
    }
  }

  for (i = 0; i<n; ++i) {
    printf("%d ", arr[i]);
  }

}
