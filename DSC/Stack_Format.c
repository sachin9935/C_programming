#include <stdio.h>
#define n 3 // Size of the stack

int stack[n], top = -1;

void push()
{
    int x;
    if (top == n - 1)
    { // Check for overflow
        printf("OVERFLOW\n");
    }
    else
    {
        printf("Enter element:\n");
        scanf("%d", &x);
        top++;
        stack[top] = x; // Store the entered element in the stack
        printf("Element %d is entered\n", x);
    }
}

void pop()
{
    if (top == -1)
    { // Check for underflow
        printf("UNDERFLOW\n");
    }
    else
    {
        int x = stack[top]; // Get the top element before popping
        top--;
        printf("Element %d is popped\n", x);
    }
}

void peek()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Top element is %d\n", stack[top]); // Added space for formatting
    }
}

void display()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("The elements of the stack are:\n");
        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]); // Print elements from top to bottom
        }
    }
}

int main()
{
    push();
    push();
    push();
    push();
    // peek();   // Show the top element
    // display(); // Display all elements
    // pop();    // Pop an element
    display(); // Display after popping

    return 0;
}
