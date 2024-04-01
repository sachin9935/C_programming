#include<stdio.h>
void sum(int n,int s){
    if(n==0){
        printf("%d",s);
        return 0;
    }
    sum(n-1,s+n);
    return;
}
int main(){
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    sum(n,0);
    return 0;
}