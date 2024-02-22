#include<stdio.h>
int main(){
    int x,y,a,b;
    printf("Enter lrngth...");
    scanf("%d",&x);
    printf("Enter breadth...");
    scanf("%d",&y);
    a=x*y;
    b=2*(x+y);
    if(a>b){
        printf("Area is grater then parimeter");
    }
    else{
        printf("Area is not grater then parimeter");
    }


    // int x,y,a,b;
    // printf("Enter number...");
    // scanf("%d",&x);
    // // printf("Enter breadth...");
    // // scanf("%d",&y);
    // if(x>99 && x<1000){
    //     printf("this  is 3 digit....");
    // }else{
    //     printf("number is not 3 digit...");
    // }


    
     
     return 0;
}