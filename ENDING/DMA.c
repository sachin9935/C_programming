#include<stdio.h>
int main(){
    int n; //4bites
    printf("Enter the size of arrays:");
    scanf("%d",&n);
    int arr[n];  //n*4
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++){
        printf("%d",arr[i]);
    }








}