#include<stdio.h>
#include<stdlib.h>
int main(){
     int *ptr;

    int n;
    // use of realloc 
    
    printf("Enter the size of the new array you want to create \n:");
    scanf("%d",&n);

    ptr = (int*)realloc(ptr,n*sizeof(int));
    for(int i=0; i<n; i++){
        printf("Enter the new value no %d of this array:\n",i);
        scanf("%d",&ptr[i]);
    }

    for(int i=0; i<n; i++){
        printf("the value at new idx %d of this array is%d\n",i,ptr[i]);
    }

    free(ptr);
}