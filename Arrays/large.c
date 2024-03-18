#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7];
    for(int i=0; i<=6; i++){
    printf("Enter number of array:\n",i+1);
    scanf("%d",&arr[i]);
    }


    // int arr[7]={1,2,3,4,5,6,7};
    int max=INT_MIN;//array mani sabsy badaa...
    int smax=INT_MIN;
    for(int i=0; i<=6; i++){
        if(max<arr[i])
        {smax=max; //smax is now privious max
        max=arr[i];  // max is now new max
        }
         else if(smax<arr[i]){
        smax=arr[i];
    }
    }
   
    printf("the secound largest number :%d",smax);
    return 0;
}