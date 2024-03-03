#include<stdio.h>
int main(){
    int x,y,pro;
    printf("enter number");
    scanf("%d",&x);
    pro=1;
    for(y=1;y<=x;y++)
       { pro=pro*y;}
    
    printf("ans= %d",pro);
    return 0;
}