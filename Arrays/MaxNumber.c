#include<stdio.h>
int main(){
    int arr[5]={-5,-6,-7,-8,-9};
    int max=arr[0];  // sabsy chota number
    // int max=-1; 
    for(int i=0; i<=4; i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
     printf("%d",max);

    
    // if(max<arr[5]){
    //     printf("%d",max);
    // }
    return 0;
}