#include<stdio.h>
int main(){
    int n,x;
    printf("enter number");
    scanf("%d",&n);
    for(x=1; x<=2*n-1; x=x+2){
        printf("%d",x);
    }
    return 0;

    // int x,y,z;
    // printf("enter number...");
    // scanf("%d",&x);
    // y=1;
    // for(z=1;z<=x;z++){
    //     printf("%d, ",y);
    //     y=y+2;
    // }
}