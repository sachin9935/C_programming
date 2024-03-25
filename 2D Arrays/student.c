#include<stdio.h>
int main(){
    int r,c;
    printf("enter the student (roll/row) number");
    scanf("%d",&r);
    printf("enter the student (his number/column) number");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}