#include<stdio.h>
void sum(int a, int b){
    int sum;
    sum=a+b;
    printf("%d",sum);
    return;
}

// int minimum(int x, int y){
//     int min=x;
//     if(y<x) min = y;
//     printf("%d",min);
// }


int main(){
    sum(5,5);
    return 0;
}
// int main(){
//     minimum(10,5);
//     return 0;
// }
