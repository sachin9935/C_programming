#include<stdio.h>
void decresing(int n){
   if(n==0) return;
   printf("%d\n",n);
   decresing(n-1);
   return;
}


int main(){
    int n;
    printf("Enter number");
    scanf("%d",&n);
    printf("the answer\n");
    decresing(n);
    return 0;
}