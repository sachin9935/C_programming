#include<stdio.h>
void greet(int n){
    if(n==0) return;
    printf("good morning\n");
    greet(n-1);
    return;
}


int main(){
    int n;
    printf("Enter number");
    scanf("%d",&n);
    greet(n);
    return 0;
}