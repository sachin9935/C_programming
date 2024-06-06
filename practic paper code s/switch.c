#include<stdio.h>
int main(){
    int h=55, e=59, m=30, cs=98,sum,pre,check;
    sum=h+e+m+cs;
    pre=sum*100/400;
    printf("enter \n1(show the total no.) \n2(persentege...=");
    scanf("%d",&check);
    switch(check){
        case 1:
                printf("%d\n",sum);
                break;
        case 2:
                printf("%d\n",pre);
                break;
        default:
                printf("you have enter rong no.!");
    }
}