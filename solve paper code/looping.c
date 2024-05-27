#include<stdio.h>
int main(){
    int marks,attnd;
    printf("Enter marks:");
    scanf("%d",&marks);
    printf("Enter attandance:");
    scanf("%d",&attnd);
    if(marks>=500){
        if(attnd>=50){
            printf("You are eligable for papre!");
        }
        else{
            printf("You are NOT eligable for papre!");
        }
    }
    else if(marks<500){
        printf("Your marks is low ! ");
    }


    // else if(marks>=400){
    //     printf("Graade B pass");
    // }
    // else if(marks>=300){
    //     printf("Graade c pass");
    // }
    // else{
    //     printf("Sorry! you are fail");

    // }
    return 0;
}