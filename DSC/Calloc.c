#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;

    int n;
    printf("Enter the size of the array you want to create \n:");
    scanf("%d",&n);

    ptr = (int*)calloc(n,sizeof(int));
    for(int i=0; i<n; i++){
        printf("Enter the value no %d of this array:\n",i);
        scanf("%d",&ptr[i]);
    }

    for(int i=0; i<n; i++){
        printf("the value at idx %d of this array is%d\n",i,ptr[i]);
    }
}