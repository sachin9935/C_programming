#include<stdio.h>
#include<string.h>


// && the miltiplae pointer problem
// typedef float realnumber;
typedef int* pointer;


int main(){
    // realnumber x=12.00;
    // printf("%f",x);
        int x=10;
        int y=20;
    pointer a=&x,b=&y;  //yyy#also define rename name as pointer....

    // int* a=&x;
    // int* b=&y;
    printf("%p\n",a);
    printf("%p\n",b);



    return 0;
};




