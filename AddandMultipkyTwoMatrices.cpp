#include <stdio.h>
#define MAX 100

void readMatrix(int n, int matrix[MAX][MAX]) {
    printf("Enter elements of the matrix: \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int n, int matrix[MAX][MAX]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int n, int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}
void multiplyMatrices(int n, int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j]; 
            }
        }
    }
}

int main() {
    int n;
    int mat1[MAX][MAX], mat2[MAX][MAX], sum[MAX][MAX], product[MAX][MAX];

    printf("Enter the order of the matrices (n x n): ");
    scanf("%d", &n);

    if (n > MAX) {
        printf("Matrix size exceeds maximum allowed size (%d).\n", MAX);
        return 1;
    }

    printf("Matrix 1: \n");
    readMatrix(n, mat1);

    printf("Matrix 2: \n");
    readMatrix(n, mat2);
 addMatrices(n, mat1, mat2, sum);
    printf("\nSum of the matrices: \n");
    printMatrix(n, sum);

    multiplyMatrices(n, mat1, mat2, product);
    printf("\nProduct of the matrices: \n");
    printMatrix(n, product);

    return 0;
}
