#include<stdio.h>
int main(){
    int r;
    printf("Enter number of rows:");
    scanf("%d",&r);
    int c;
    printf("Enter number of column:");
    scanf("%d",&c);
    int arr[r][c]; 
    //  {{1,2,3},{2,4,5},{3,6,7}};
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



// #include<stdio.h>

// int main() {
//     int arr[3][3]; 
//     //  {{1,2,3},{2,4,5},{3,6,7}};
//     for(int i = 0; i < 3; i++) {
//         for(int j = 0; j < 3; j++) {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     for(int i = 0; i < 3; i++) {
//         for(int j = 0; j < 3; j++) {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }
