#include<stdio.h>
int power(int a,int b){
    if(b==0) return 1;
    return a*power(a,b-1);
    
    // int x=1;
    // for(int i=1; i<=b; i++){
    //     x=x*a;
    // }
    // return x;

}


int main(){
    int a,b;
    printf("Enter the value/base:");
    scanf("%d",&a);
    printf("Enter power of power:");
    scanf("%d",&b);
    int p=power(a,b);
    printf("%d reised to the power %d is %d",a,b,p);
}