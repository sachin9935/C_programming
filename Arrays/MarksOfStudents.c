#include<stdio.h>
int main(){
    
    int marks[10];
    for(int i=0; i<=9; i++){
        int n=i+0;
        printf("Enter the marks of students %d\n",n);
        scanf("%d",&marks[i]);
    }
    for(int i=0; i<=9; i++){
        int con=35;
        if(marks[i]<=con){
            printf("this is the index of %d ",i);
        }


        // printf("%d",marks[i]);
    }
    
    return 0;
}