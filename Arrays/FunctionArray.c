#include<stdio.h>
void swap(int x[]){
    int temp=x[0];
    x[0]=x[1];
    x[1]=temp;
}
int main(){
    int arr[2]={5,6};
    printf("%d %d\n",arr[0],arr[1]);
    swap(arr);
    printf("%d %d",arr[0],arr[1]);
    return 0;
}