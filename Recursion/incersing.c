#include<stdio.h>
void incersing(int x,int n){
   if(x>n) return;
   printf("%d\n",x);
   incersing(x+1,n);
   return;
}


int main(){
    int n;
    printf("Enter number");
    scanf("%d",&n);
    incersing(1,n);
    return 0;
}