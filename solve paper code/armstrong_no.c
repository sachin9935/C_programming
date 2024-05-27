#include<stdio.h>
int main(){
    // input 153----> 1*1*1 + 5*5*5 + 3*3*3 = 153
    int n,c,r,arm=0;
    printf("Enter number:");
    scanf("%d",&n);
    c=n;
    while(n>0){
        r=n%10;
        arm=(r*r*r)+arm;
        n=n/10;
    }
    if(c==arm){
        printf("armstrong number");
    }
    else{
        printf("Not armstrong number");
    }
    return 0;
}