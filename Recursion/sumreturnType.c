#include<stdio.h>
int sum(int n){
    if(n==1 || n==0) return 1;
    int resAns=n+sum(n-1);
    return resAns;
}
int main(){
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    int fact=sum(n);
    printf("%d",fact);
    return 0;
}