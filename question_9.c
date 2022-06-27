#include <stdio.h>

int  main() {
	int m,n,i,j;
	printf("Enter the size of the array1 followed by elements:\n");
	scanf("%d", &m);
	int arr0[m];
	for (i=0; i<m; ++i) {
	scanf("%d", &arr0[i]);
	}
	printf("Enter the size of the array2 followed by elements:\n");
	scanf("%d", &n);
	int arr1[n];
	for (i=0; i<n; ++i) {
	scanf("%d", &arr1[i]);
	}
	int d = m+n;
	int arr[d];
	for (i=0; i<d; ++i) {
		if (m!= 0 && n!=0) {
			if (arr0[0] > arr1[0]) {
				arr[i] = arr1[0];
				n = n-1;
				for (j=0; j<n; ++j) {
					arr1[j] = arr1[j+1];
				}
			} else if (arr0[0] < arr1[0]) {
				arr[i] = arr0[0];
				m = m-1;
				for (j=0; j<m; ++j) {
					arr0[j] = arr0[j+1];
				}
			} else {
				arr[i] = arr0[0];
				arr[i+1] = arr1[0];
				m= m-1;
				n = n-1;
				for (j=0; j<m; ++j) {
					arr0[j] = arr0[j+1];
				}
				for (j=0; j<n; ++j) {
					arr1[j] = arr1[j+1];
				}
				i+=1;
			}
		} else if (m==0 && n!=0) {
			for (j=0; j<n; ++j) {
				arr[i+j] = arr1[j];
			}
			break;
		} else if (m!=0 && n==0) {
			for (j=0; j<m; ++j) {
				arr[i+j] = arr0[j];
			}
			break;
		}
	}

	for (i=0; i<d; ++i) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;


}
