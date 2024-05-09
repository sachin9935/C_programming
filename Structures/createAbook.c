#include<stdio.h>
#include<string.h>
int main(){
    struct book{
        char name[50];
        float price;
        int n_of_pages;

    }a,b,c;
    // struct book deatils;
    
    a.price=411.5;
    a.n_of_pages=120;
    strcpy(a.name,"the jangal book");

    printf("%f\n",a.price);
    printf("%d\n",a.n_of_pages);
    printf("%s",a.name);



    // ##new mathod for printing strings...
    // char str[14];
    // strcpy(str,"Sachin misfra");
    // printf("%s",str);




    // char ch[10]="the book";
    // printf("%s",ch);


}