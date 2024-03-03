#include<stdio.h>

// break statement...
int main(){
    int x,y;
    printf("Enter number...");
    scanf("%d",&x);
    int z=0;
    for(y=2;y<=x-1;y++){
        if(x%y==0){
            // printf("the number is composite\n");
            z=1;
            break;
        }
    }
    if(x==1) printf("1 is neither prime nor composite\n");
    else if(z==0) printf("the given numbre is prime\n");
    else printf("the given number is composite\n");
    return 0;
}