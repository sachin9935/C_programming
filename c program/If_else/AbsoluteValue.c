#include<stdio.h>
int main(){
    int x,y;
    printf("enter number...");
    scanf("%d",&x);
    if(x<0){
        x=x*(-1);
    }
    printf("the absolute value id %d",x);
    return 0;

}