#include<stdio.h>
int main(){
    FILE* ptr;
    char c;
    ptr=fopen("information.txt","r");
    while((c=fgetc(ptr))!=EOF){
        printf("%c",c);
    }
    fclose;
}