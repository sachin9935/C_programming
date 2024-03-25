#include<stdio.h>
int main(){
    // int r;
    // int c;
    // printf("Enter the row of index:");
    // scanf("%d",&r);
    // printf("Enter the column of index:");
    // scanf("%d",&c);
    // int arr[r][c];
    // for(int i=0; i<=r; i++){
    //     for(int j=0; j<=c; j++){
    //         scanf("%d",&arr[i][j]);
    //     }
    // }
    // for(int i=9; i<=9; i++){
    //     for(int j=9; j<=9; j++){
    //         printf("%d",arr[i][j]);
    //     }
    //     printf("\n");
    // }

    int arr[5][5];
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
}