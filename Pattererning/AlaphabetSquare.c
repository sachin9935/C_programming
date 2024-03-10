#include<stdio.h>

int main(){
    int n;
    printf("enter number...");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){  //no of lines / rows..
        int a=65;
        char ch=(char)a;
        for(int j=1; j<=i; j++){  //no of columns...
            printf("%d",j);
            printf("%c ",a);
            a++;
            
        }
        
        printf("\n");
    }
}