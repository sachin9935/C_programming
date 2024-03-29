#include <stdio.h>

int main() {
    int r, c;
    
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    
    int arr[r][c];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nThe original matrix is:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\nThe transpose of the matrix is:\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }

    printf("\nThe reverse of the matrix is:\n");
    for (int i = c - 1; i >= 0; i--) {
        for (int j = r - 1; jo >= 0; j--) {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }

    return 0;
}
