#include<stdio.h>

void swap(int a,int b){
    a=a+b;
    b=a-b;
    a=a-b;
    return;
    
}


int main(){
    int x,y;
    printf("enter number for x");
    scanf("%d",&x);
    printf("enter number for y");
    scanf("%d",&y);
    swap(x,y);
    // x=x+y;
    // y=x-y;
    // x=x-y;
    printf("this is the value of x= %d\n",x);
    printf("this is the value of y= %d",y);
}