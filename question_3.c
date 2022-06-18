#include <stdio.h>

int main() {
  int n, i, j, k, odd=0, even=0;
  scanf("%d", &n);

  int arr[n];
  for (i = 0; i<n; ++i) {
    scanf("%d", &arr[i]);
  }

  for (i = 0; i<n; ++i) {
    if (arr[i] >= 0) {
      if (arr[i] % 2 == 0) even++;
      else odd++;
    }
  }
  printf("There are %d odd and %d even numbers in the array.\n", odd, even);
}
