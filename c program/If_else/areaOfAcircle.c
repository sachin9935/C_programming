#include<stdio.h>
int main(){
    // int x,y,a,b;
    // printf("Enter lrngth...");
    // scanf("%d",&x);
    // printf("Enter breadth...");
    // scanf("%d",&y);
    // a=x*y;
    // b=2*(x+y);
    // if(a>b){
    //     printf("Area is grater then parimeter");
    // }
    // else{
    //     printf("Area is not grater then parimeter");
    // }


    // int x;
    // printf("enter number...");
    // scanf("%d",&x);
    // if(x>99 && x<1000){
    //     printf("number is 3digit...");
    // }
    // else{
    //     printf("not 3 digit...");
    // }

    int x,y;
    printf("enter number x...");
    scanf("%d",&x);
    // printf("enter number y...");
    // scanf("%d",&y);
    int a,b;
    a=(x%5==0);
    b=(x%3==0);
    if(a==b){
        printf("divisable number...");
    }
    else{
        printf("not divisable");
    }

    return 0;
}