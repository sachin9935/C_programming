#include<stdio.h>
int main(){
    int x,y;
    // printf("Enter number...");
    // scanf("%d",&x);
    for(y=1; y<=100; y++){
        if(y%2 !=0)  //odd
        {
            continue;
        }
        printf("%d, ",y);
    }
    return 0;
} 