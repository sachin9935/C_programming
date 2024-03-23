#include<stdio.h>
int main(){
    int arr[7]={1,2,3,4,5,6,3};
    for(int i=0; i<=6; i++){
        for(int j=i+1; j<=6; j++){
            if(arr[i]==arr[j]){
                printf("the duplicate element:%d ",arr[i]);
                break;
            }
        }
    }
}