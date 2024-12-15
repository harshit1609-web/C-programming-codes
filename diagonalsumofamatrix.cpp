#include<stdio.h>
int main() {
	int n, i, j;
	printf("Enter the order of the matrix(n x n): ");
	scanf("%d", &n);
	
	int matrix[n][n];
	printf("Enter the elements of the matrix: \n");
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("Elements [%d][%d]:", i + 1, j + 1);
			scanf("%d", &matrix[i][j]);
		}
	}
	int primary_diagonal_sum = 0, secondary_diagonal_sum = 0;
	for (i = 0; i < n; i++) {
		primary_diagonal_sum += matrix[i][j];
		secondary_diagonal_sum += matrix[i][n - 1 - i];
	}
	printf("In the Matrix is: \n");
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%d", matrix[i][j]);
		}
		printf("\n");
	}
	printf("\n Sum of primary diagonal elements: %d\n", primary_diagonal_sum);
	printf("Sum of secondary diagonal elements: %d\n", secondary_diagonal_sum);
	
	return 0;
}
