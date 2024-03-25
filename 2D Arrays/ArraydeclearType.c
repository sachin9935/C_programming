#include<stdio.h>
int main(){
    // int arr[2][2]={1,2,3,4};
    // int arr[4][2]={1,2,3,4,5,6,7,8};
    // int arr[2][4]={1,2,3,4,5,6,7,8};
    int arr[][4]={1,2,3,4,5,6,7,8};

    for(int i=0; i<=1; i++){  //for row
        for(int j=0; j<=3; j++){  //for column..
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}