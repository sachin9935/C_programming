#include<stdio.h>
int main(){
    FILE* fp=fopen("priyanshu.txt","w");
    // fputc('p',fp);

    // fprintf(fp,"sachin mishra is frind of priyanshu");
    fputs("c programming is my passion",fp);
    
    printf("file updated....");
    fclose;
    return 0;
}