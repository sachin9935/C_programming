#include<stdio.h>
// sum matrix 3*3;
int main(){
    int arr[3][3],brr[3][3],crr[3][3];
    printf("enter the first matrix:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("values for arr[%d][%d]",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("enter the seound matrix:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("values for arr[%d][%d]",i,j);
            scanf("%d",&brr[i][j]);
        }
    }
    printf("the sum of matrix:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
           crr[i][j]=arr[i][j]+brr[i][j];
           printf("%d ",crr[i][j]);
        }
        printf("\n");
    }










}


// for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             printf("%d",arr[i][j]);
//         }
//         printf("\n");
//     }