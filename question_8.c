#include <stdio.h>
int main() {
  int n, i, j, ci;
  printf("Enter the size of the array:\n");
  scanf("%d", &n);
  char c[n];
  char dup[n];
  scanf("%s", c);

  for (i=0; i<n; ++i) {
    dup[n-i-1] = c[i];
  }

  for (i=0; i<n; ++i) {
    if (c[i] != dup[i]) {
      ci =0;
      break;
    } else {
      ci = 1;
    }
  }

  if (ci) {
    printf("The given integer is a palindrome.\n");
  } else {
    printf("The given integer is not a palindrome.\n");
  }


}
