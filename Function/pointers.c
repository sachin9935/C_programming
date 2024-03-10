#include<stdio.h>
int main(){
   int a=25;
   int* x=&a;
   *x=7;
   printf("%d\n",a);
   printf("%p\n",a);
   printf("%p",x);

    return 0;
}