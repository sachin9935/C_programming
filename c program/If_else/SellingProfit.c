#include<stdio.h>
int main(){
    int cp,sp;
    printf("Enter your cost price...");
    scanf("%d",&cp);
    printf("Enter your selling price...");
    scanf("%d",&sp);
    if(cp<sp){
        printf("profit");
    }else if(cp==sp){
        printf("no profit,no loss");
    }
    else{
        printf("loss");
    }
    
}