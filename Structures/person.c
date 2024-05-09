#include<stdio.h>
#include<string.h>
int main(){
    struct person{
        char name[50];
        float salary;
        int Age;
    }details_of_person;
    strcpy(details_of_person.name,"sachin mishra");
    // details_of_person.Age=20;
    printf("the age of person:");
    scanf("%d",&details_of_person.Age);

    details_of_person.salary=2000.00;

    printf("%s\n",details_of_person.name);
    printf("%d\n",details_of_person.Age);
    printf("%f\n",details_of_person.salary);











    return 0;
}