#include<stdio.h>
int main(){
     int r, c;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    int arr[r][c];
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The entered array is:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    int brr[c][r];
    printf("\n");
    for(int i = 0; i < c; i++) {
        for(int j = 0; j < r; j++) {
            brr[i][j]=arr[j][i];
            // printf("%d",arr[i][j]);
        }
    }//printing brr
    for(int i = 0; i < c; i++) {
        for(int j = 0; j < r; j++) {
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
   
    return 0;
}