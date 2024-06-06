#include<stdio.h>
#include<string.h>
int main(){
    
    // char f_name[10],l_name[10];
    // printf("enter first name:");
    // gets(f_name);
    // printf("enter laset name:");
    // gets(l_name);
    // strcat(f_name,l_name);
    // printf("%s",f_name);
    char name[30];
    printf("Enter name:");
    gets(name);
    strlwr(name);
    printf("lower string of name:%s\n",name);
    strupr(name);
    printf("upper string of name:%s",name);

    



}