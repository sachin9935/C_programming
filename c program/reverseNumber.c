#include<stdio.h>
int main(){
    int n;
    printf("enter number");
    scanf("%d",&n);
    int r=0;
    while(n>0){
        r=r*10;
        r=r+(n%10);
        n=n/10;
    }
    printf("reverse number is %d",r);
    return 0;
}