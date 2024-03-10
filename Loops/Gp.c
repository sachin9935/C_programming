#include<stdio.h>
int main(){
    int x,y,z;
    printf("enter number...");
    scanf("%d",&x);
    y=3;
    for(z=1; z<=x; z++){
        printf("%d, ",y);
        // y=y*2;
         y=y*4;
    }
    return 0;
}