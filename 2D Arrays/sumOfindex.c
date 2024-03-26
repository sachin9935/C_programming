#include<stdio.h>
int main(){
    int arr[4][4]={{1,0,1,1},{1,1,1,1},{0,0,0,1},{0,0,0,0}};
    int maxcount=0;
    int maxid=-1;
    int sum=0;
    for(int i=0; i<4; i++){
        int count=0;
        for(int j=0; j<4; j++){
            if(arr[i][j]==1) count++;
            sum+=arr[i][j];
         }
        if(maxcount<count){
            maxcount = count;
            maxid=i;
         }
        // for(int i=0; i<4; i++){
        // for(int j=0; j<4; j++){
        //     sum+=arr[i][j];
        // }
        // }
    }      
        printf("the sum of index(matrix) is:%d",sum);
        printf("\n");

        printf("the higest/max(ints) row number:%d",maxid);
}

