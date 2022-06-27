#include <stdio.h>

int main() {
	int m, n, i, j, k;

	printf("Enter the size of the 2D array: m n \n");
	scanf("%d %d", &m, &n);

	int arr[m][n];
	printf("Enter the values of first array: \n");
	for (i=0; i<m; ++i) {
		for (j=0; j<n; ++j) {
			scanf("%d", &arr[i][j]);
		}
	}
	printf("Enter the values of second array: \n");
	int arr1[m][n];
	for (i=0; i<m; ++i) {
		for (j=0; j<n; ++j) {
			scanf("%d", &arr1[i][j]);
		}
	}

	int res[m][n];
	for (i=0; i<m; ++i) {
		for (j=0; j<n; ++j) {
			res[i][j] = arr[i][j] - arr1[i][j];
		}
	}

	printf("The subtraction of the first and second matrices:\n");
	for (i=0; i<m; ++i) {
		for (j=0; j<n; ++j) {
			printf("%d ", res[i][j]);
		}
		printf("\n");
	}

	return 0;
}
