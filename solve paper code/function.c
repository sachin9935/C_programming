#include<stdio.h>





int main(){
    int sq,n;
    printf("enter number");
    scanf("%d",&n);
    sq=squre(n);
    printf("the squre of no.%d",sq);
}

int squre(int n){
        int result;
        result=n*n;
        return (result);
    }
    