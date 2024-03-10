#include<stdio.h>
int main(){
    int x,y;
    printf("enter table number...");
    scanf("%d",&x);
    for(y=1; y<=10; y++){
        printf("%d\n",x*y);
    }
}