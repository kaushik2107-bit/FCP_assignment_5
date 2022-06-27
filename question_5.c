#include <stdio.h>

int main() {
  int n, i, j, num;
  printf("Enter the size of the array:\n");
  scanf("%d", &n);
  int arr[n];

  for (i=0;i<n; ++i) {
    scanf("%d", &arr[i]);
  }

  printf("Enter a number you want to delete from the array. ");
  scanf("%d", &num);

  for (i = 0; i<n; ++i) {
    if (arr[i] == num) {
      break;
    }
  }
  if (i<n) {
    n = n-1;
    for (j =i; j<n; ++j) {
      arr[j] = arr[j+1];
    }
  } else {
    printf("The element does not exist in the array:\n");
  }

  for (i=0; i<n; ++i) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}
