#include <stdio.h>

int main() {
  int n, i, j, sum = 0;
  printf("Enter the size of the array:\n");
  scanf("%d", &n);
  int arr[n];
  for (i=0; i<n; ++i) {
    scanf("%d", &arr[i]);
  }

  for (i=0; i<n;++i) {
    for (j=0; j<n; ++j) {
      sum += arr[i]%arr[j];
    }
  }
  printf("%d\n", sum);
}
