#include<stdio.h>
int main(){
    int n,sum,lastdigit;
    printf("enter number");
    scanf("%d",&n);
    sum=0;
    lastdigit=0;
    while(n!=0){
        lastdigit=n%10;
        sum=sum+lastdigit;
        n=n/10;
    }
    printf("the sum of %d",sum);
    return 0;
}