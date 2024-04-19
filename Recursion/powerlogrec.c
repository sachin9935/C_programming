#include<stdio.h>
int powerlog(int a,int b){
    if(b==0) return 1;
    int x=powerlog(a,b/2);
    if(b%2==0)
        return x*x;
    else    
        return x*x*a;
}

int main(){
    int a,b;
    printf("Enter the value/base:");
    scanf("%d",&a);
    printf("Enter power of power:");
    scanf("%d",&b);
    int p=powerlog(a,b);
    printf("%d reised to the power %d is %d",a,b,p);
}