#include<stdio.h>
#include<limits.h>
int main(){
    int arr[6]={64,25,12,22,11,8};
    int n=6;
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    // //selection short ...
    // for(int i=0; i<n-1; i++){
    //     int min=INT_MAX;
    //     int minIdx=-1;
    //     for(int j=i; j<n; j++){
    //         if(min>arr[j]){
    //             min=arr[j];
    //             minIdx=j;
    //         }
    //         //swap
    //         int temp=arr[minIdx];
    //         arr[minIdx]=arr[i];
    //         arr[i]=temp;
    //     }
    // }


    for(int i=0; i<n-1; i++){
        int min=INT_MAX;
        int minIdx=-1;
        for(int j=i; j<n; j++){
            if(min>arr[j]){
                min=arr[j];
                minIdx=j;
            }
        int temp=arr[minIdx];
        arr[minIdx]=arr[i];
        arr[i]=temp;
        }
    }










    printf("\n");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}