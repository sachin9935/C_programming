#include<stdio.h>
int main(){
    int a,b,temp;
    printf("enter number a:");
    scanf("%d",&a);
    printf("enter number b:");
    scanf("%d",&b);
    
    temp=a;
    a=b;
    b=temp;
    printf("the number of a=%d\n",a);
    printf("the number of b=%d\n",b);
    
    return 0;
}




