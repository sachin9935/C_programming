#include<stdio.h>
int factoriyal(int n){
    if(n==1 || n==0) return 1;  //base case
    int recans = n*factoriyal(n-1);
    return recans;



    // int fact=1; 
    // for(int i=2; i<=n; i++){
    //     fact= fact*i;
    // }
    // return fact;
}


int main(){
    int n;
    printf("Enter number");
    scanf("%d",&n);
    int fact=factoriyal(n);
    printf("%d",fact);
}