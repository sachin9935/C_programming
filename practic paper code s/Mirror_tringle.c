#include<stdio.h>
int main(){
    for(int i=1; i<=5; i++)//for rows...
    {
        for(int j=4; j>=i; j--)// for space...
        {
            printf(" ");
        }
        for(int k=1; k<=i; k++)// for *...
        {
            printf("*");
        }
        printf("\n");
    }
}