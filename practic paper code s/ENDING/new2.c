#include<stdio.h>
int main(){
    FILE* ptr;
    int roll,marks;
    char name[50];
    ptr=fopen("information.txt","w");
    if(ptr==NULL){
        printf("file does not exits:");
        return 0;
    }
    printf("enter the name:\n");
    scanf("%s",&name);
    fprintf(ptr,"Name=%s\n",name);
    printf("Enter the roll number:\n");
    scanf("%d",&roll);
    fprintf(ptr,"Roll no=%d\n",roll);
    printf("Enter student marks:\n");
    scanf("%d",&marks);
    fprintf(ptr,"marks=%d",marks);
    fclose(ptr);
    return 0;
}