
#include <stdio.h>
#include <string.h>

int main() {
    typedef struct Cricketer {
        int age;
        int n_of_matches;
        float average;
        char name[20];
    } Cricketer;

    Cricketer arr[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter name: ");
        scanf("%19s", arr[i].name); // Limiting input to 19 characters to prevent buffer overflow
        printf("Enter age: ");
        scanf("%d", &arr[i].age);
        printf("Enter number of matches: ");
        scanf("%d", &arr[i].n_of_matches);
        printf("Enter average: ");
        scanf("%f", &arr[i].average);
    }

    for (int i = 0; i < 3; i++) {
        printf("Name: %s\n", arr[i].name);
        printf("Age: %d\n", arr[i].age);
        printf("Number of matches: %d\n", arr[i].n_of_matches);
        printf("Average: %.2f\n", arr[i].average); // Printing with two decimal places

        printf("\n");
    }

    return 0;
}
