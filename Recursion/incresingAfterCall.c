#include<stdio.h>
void incresing(int n){
   if(n==0) return; //base case
   incresing(n-1);  //call
   printf("%d\n",n);  //code
   return;
}
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
    printf("this is your incersing process:");
    incresing(n);
    printf("this is your decrsing process:");
    decresing(n);
    return 0;
}