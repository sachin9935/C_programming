#include<stdio.h>
void main(int argc, char *argv[00]){
    int i;
    printf("\nProgram name: %s",argv[0]);
    printf("\nTotal no of arguments: %d",argc);
    for(i=0; i<argc; i++){
        printf("\n argv[%d]: %s",i,argv[i]);
    }
}