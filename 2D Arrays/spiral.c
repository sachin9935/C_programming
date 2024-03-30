// #include<stdio.h>
// int main(){
//     int r;
//     printf("Enter the row element number:");
//     scanf("%d",&r);
//     int c;
//     printf("Enter the column element number:");
//     scanf("%d",&c);
//     int arr[r][c];
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
// }



#include<stdio.h>

void spiralPrint(int m, int n, int arr[m][n]) {
    int i, k = 0, l = 0;

    while (k < m && l < n) {
        // Print the first row from the remaining rows
        for (i = l; i < n; ++i) {
            printf("%d ", arr[k][i]);
        }
        k++;

        // Print the last column from the remaining columns
        for (i = k; i < m; ++i) {
            printf("%d ", arr[i][n-1]);
        }
        n--;

        // Print the last row from the remaining rows
        if (k < m) {
            for (i = n-1; i >= l; --i) {
                printf("%d ", arr[m-1][i]);
            }
            m--;
        }

        // Print the first column from the remaining columns
        if (l < n) {
            for (i = m-1; i >= k; --i) {
                printf("%d ", arr[i][l]);
            }
            l++;
        }
    }
}

int main() {
    int r, c;
    printf("Enter the row element number: ");
    scanf("%d", &r);
    printf("Enter the column element number: ");
    scanf("%d", &c);

    int arr[r][c];
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The spiral print of the array is:\n");
    spiralPrint(r, c, arr);

    return 0;
}
