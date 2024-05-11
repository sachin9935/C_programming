#include<stdio.h>
int main(){
    // FILE* ptr=fopen("Sachin.txt","r");
    // char str[100];
    // if(fgets(str,100,ptr)!=NULL)

    // while(fgets(str,100,ptr)!=NULL)
    // printf("%s",str);

    //Creating a file ..
    FILE* ptr=fopen("BCA.txt","w");
    char str[]="palcement to lunga TCS ya Wipor may hi lunga...";
    fputs(str,ptr);
    fclose;
    
}