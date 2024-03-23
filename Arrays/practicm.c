#include<stdio.h>
#include<limits.h>
int main(){
    // int n,i;
    // printf("Enter number of arr...",i+1);
    // scanf("%d",&n);
    int arr[5]={1,4,3,4,5};
    int max = INT_MIN; //sabsy chota number..
    int smax = INT_MIN;
    for(int i=0; i<=4; i++){
        if(max<arr[i]){
            smax=max;
            max=arr[i];
        }
        else if(smax<arr[i] && max!=arr[i]){
            smax=arr[i];
        }
    }
    printf("%d",smax);
}