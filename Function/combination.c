#include<stdio.h>

                            // ncr question =7c3
int factoriyal(int x){
    int fact=1;
    for(int i=1; i<=x; i++){
        fact=fact*i;
    }
    return fact;
}

int main(){
    int n;
    printf("enter number n= ");
    scanf("%d",&n);
    int r;
    printf("enter number r= ");
    scanf("%d",&r);
    int ncr=factoriyal(n)/(factoriyal(r)*factoriyal(n-r));
    printf("%d",ncr);
    return 0;
}