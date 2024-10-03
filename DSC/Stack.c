
#include <stdio.h>

#define MAXSIZE 5 // Define maximum stack size

int stack[MAXSIZE], top = -1;

void push();
void pop();
void display();

int main() {
    int choice;

    do {
        printf("\n----------Stack Menu------------");
        printf("\n 1. Push \n 2. Pop \n 3. Display \n 4. Exit");
        printf("\n--------------------------------");
        printf("\n Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
        }
    } while (choice != 4);

    return 0;
}

void push() {
    int n;
    if (top == MAXSIZE - 1) {
        printf("\n Stack Overflow");
    } else {
        printf("\n Enter an element: ");
        scanf("%d", &n);
        top++;
        stack[top] = n;
    }
}

void pop() {
    int n;
    if (top == -1) {
        printf("\n Stack Underflow");
    } else {
        n = stack[top];
        top--;
        printf("\n Popped element is %d", n);
    }
}

void display() {
    int i;
    if (top == -1) {
        printf("\n Stack is empty");
    } else {
        printf("\n Elements of stack:\n");
        for (i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}
