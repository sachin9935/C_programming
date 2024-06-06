#include <stdio.h>

int main() {
    // Define a 3x3 matrix
    int matrix[3][3];
    int sum = 0;

    // Input the matrix elements
    printf("Enter the elements of the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of the matrix elements
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum += matrix[i][j];
        }
    }

    // Print the sum
    printf("The sum of the elements in the matrix is: %d\n", sum);

    return 0;
}
