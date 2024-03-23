#include<stdio.h>
void reverse(int arr[],int si,int ei){  // reversing
    for(int i=si,j=ei;i<j;i++,j--){
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return;

}



int main(){
    int arr[7]={1,2,3,4,5,6,7};
    reverse(arr,0,6);
    //index 1-4 reverse
    for(int i=0; i<=6; i++){
        printf("%d ",arr[i]);
    }
    
}