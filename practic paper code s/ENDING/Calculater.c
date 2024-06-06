
#include <stdio.h>

int main() {
    int n1, n2;
    char ch;
    printf("Enter two numbers: ");
    scanf("%d", &n1);
    printf("Enter operator: ");
    scanf(" %c", &ch); // Adding a space before %c to consume leading whitespace
    printf("Enter two numbers: ");
    scanf("%d", &n2);
    switch(ch){
        case '+':
        printf("%d",n1+n2);
        break;
        case '-':
        printf("%d",n1-n2);
        break;
        case '%':
        printf("%d",n1%n2);
        break;
        case '*':
        printf("%d",n1*n2);
        break;
        case '/':
        printf("%f",(float)n1/n2);
        break;
        default:
        printf("Something isshu.... ");
    }
    
    // if (ch == '+')
    //     printf("%d", n1 + n2);
    // else if (ch == '-')
    //     printf("%d", n1 - n2);
    // else if (ch == '*')
    //     printf("%d", n1 * n2);
    // else if (ch == '/')
    //     printf("%d", n1 / n2);
    // else
    //     printf("Invalid operator");

    return 0;
}
