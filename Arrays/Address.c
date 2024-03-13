#include<stdio.h>
int main(){
    int arr[4]={2,3,4,5};
    printf("%p\n",&arr[0]);
    printf("%p\n",&arr[1]);
    printf("%p\n",&arr[2]);
    printf("%p",&arr[3]);

    // for(int i=0; i<=3; i++){
    // printf("enter number %d\n",i+1);
    // scanf("%d",&arr[i]);
    // }
    // for(int i=0; i<=3; i++){
    //     printf("this is the addres of %p\n",&arr[i]);
    // }
    return 0;
}