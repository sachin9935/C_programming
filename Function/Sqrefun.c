#include<stdio.h>
#include<math.h>
int main(){
    int n,sqr;
    printf("enter number");
    scanf("%d",&n);
    sqr=sqrt(n);//bulid in function...
    printf("squar of your number: %d\n",sqr);

    int a=pow(2,3);  //bulid in function...
    printf("Power of numbers.. %d",a);
    return 0;
}