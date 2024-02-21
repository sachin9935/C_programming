#include<stdio.h>
int main(){
    int a,b,d;
    printf("enter dividend:");
    scanf("%d",&a);
    printf("enter divisor:");
    scanf("%d",&b);
    d = a % b;
    printf("the reminder when %d id divied by %d is:%d",a,b,d);



    // float x;
    // printf("enter your flaot number:");
    // scanf("%f",&x);
    // int y;
    // y=x;
    // // float z=x-y;
    // printf(" your fractional number is:%f",y);
    return 0;
} 