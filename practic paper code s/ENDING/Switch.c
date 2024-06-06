#include<stdio.h>
int main(){
    int n;
    printf("Enter day number:");
    scanf("%d",&n);
    switch(n){
        case 1:
        printf("monday");
        break;
        case 2:
        printf("tuesday");
        break;
        case 3:
        printf("wensday");
        break;
        case 4:
        printf("thusday");
        break;
        case 5:
        printf("firday");
        break;
        case 6:
        printf("saturday");
        break;
        case 7:
        printf("sunday");
        break;
        default:
        printf("Worang mathod");
    }
}