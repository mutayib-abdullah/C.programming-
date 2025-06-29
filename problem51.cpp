#include <stdio.h>

int main() {
    int n;

    // Input size of square matrix
    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    int matrix[100][100];
    int sum = 0;

    // Input matrix elements
    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate sum of diagonal elements
    for(int i = 0; i < n; i++) {
        sum += matrix[i][i]; // Primary diagonal
        if(i != n - i - 1) {
            sum += matrix[i][n - i - 1]; // Secondary diagonal (avoid double-counting center element)
        }
    }

    // Display the matrix (optional)
    printf("\nMatrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Print the sum
    printf("\nSum of all diagonal elements: %d\n", sum);

    return 0;
}

