#include<stdio.h>
int main(){
   // insertion
    int size,pos,item;
    printf("Enter the size of array");
    scanf("%d",&size);

    size++;
    int arr[size];
    printf("Enter the elements:");
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the idx of pos:");
    scanf("%d",&pos);
    printf("Enter the item:");
    scanf("%d",&item);

    //cheaking the position...
    if(pos<0 || pos>size){
        printf("Invalid position!");
        return 1;
    }

    for(int i=size; i>=pos; i--){
        arr[i] = arr[i-1];
    }
    arr[pos]=item;
    

printf("after inseting:");
    for(int i=0; i<size; i++){
        printf("%d",arr[i]);
    }
}