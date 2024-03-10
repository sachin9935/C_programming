#include<stdio.h>

int factoriyal(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact=fact*i;
    }
    return fact;
}

int combination(int n,int r){
    int ncr=factoriyal(n)/(factoriyal(r)*factoriyal(n-r));
    return ncr;
}

int main(){
    int n;
    printf("enter number");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int j=0; j<=i; j++){
            int icj=combination(i,j);
            printf("%d ",icj);
        }
        printf("\n");
    }
}











