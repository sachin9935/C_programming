#include<stdio.h>
int main(){
    int aSize,bSize;

    printf("Enter the size of 1st array:");
    scanf("%d",&aSize);
    int a[aSize];

    printf("Enter the size of 2nd array:");
    scanf("%d",&bSize);
    int b[bSize+1];

    // int marge[a[i]+b[i]];
    int marge[aSize+bSize];

    printf("Enter the element of 1st arr");
    for(int i=0; i<aSize; i++){
        scanf("%d",&a[i]);
        marge[i] = a[i];
    }

    printf("Enter the element of 2nd arr");
    for(int i=0; i<bSize; i++){
        scanf("%d",&b[i]);
        marge[aSize + i] = b[i];
    }

    

    for(int i=0; i<aSize+bSize; i++){
        printf("%d",marge[i]);
    }
    
}