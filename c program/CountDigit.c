#include<stdio.h>
int main(){
    int x,y;
    printf("enter nuber");
    scanf("%d",&x);
    y=0;
    while(x%y==0){
        x=x/10;
        y++;
    }
    printf("the number digit is %d",y);
    return 0;
}