#include<stdio.h>
int main(){
    FILE* ptr1,*ptr2;
    char c;
    ptr1=fopen("information.txt","r");
    if(ptr1==NULL){
        printf("error of prgram!!!");
    }
    ptr2=fopen("BCA.txt","w");
    while((c=fgetc(ptr1))!=EOF){
        fputc(c,ptr2);
    }
    printf("sussesfull!!");
    fclose(ptr1);
    fclose(ptr2);
}