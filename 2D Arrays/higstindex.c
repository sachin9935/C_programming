#include<stdio.h>
int main(){
    int arr[3][4]={{0,1,0,1},{1,0,1,1},{1,1,1,1}};
    int maxcount=0;
    int maxid=-1;
    for(int i=0; i<3; i++){
        int count = 0;
        for(int j=0; j<4; j++){
            if(arr[i][j]==1) count++;
        }
        if(maxcount<count){
            maxcount = count;
            maxid = i;  
        }
        printf("\n");
    }
    printf("this is my maxcount in index:%d\n",maxcount);
    printf("this is the max count of id/row:%d",maxid);

}