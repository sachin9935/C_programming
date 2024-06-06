#include<stdio.h>
int main(){//find the dubliicate element..
    int arr[]={6,1,2,3,2,5,4};
    //calculate the size of array...
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                printf("the duplicate element=%d\n",arr[i]);
                break;
            }
        }
    }
}