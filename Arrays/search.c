#include<stdio.h>
int main(){
    int arr[7]={1,2,3,4,5,4,7};
    int x=4;
    for(int i=0; i<=6; i++){
        if(arr[i]==x){
        printf("the given value =%d \n,& his index =%d",x,i);
        break;
        }
    }
}