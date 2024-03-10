#include<stdio.h>
void swap(int* x,int* y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    return;
}
int main(){
    int a,b,c;
    a=5;
    b=10;
    c=15;
    int* x=&c;
    int** y=&x;
    swap(&a,&b);
    printf("a is =%d\n",a);
    printf("b is =%d\n",b);
    printf("x is =%d\n",*x);
    printf("y is =%d\n",**y);

    return 0;
}