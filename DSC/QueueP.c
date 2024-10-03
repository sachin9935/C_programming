#include <stdio.h>
#define n 5  // Define the size of the queue

int queue[n];
int front = -1;
int rear = -1;

void enqueue(int x) {
    if (rear == n - 1) {  // Queue is full
        printf("Queue overflow\n");
    } else if (front == -1 && rear == -1) {  // Queue is empty initially
        front = rear = 0;
        queue[rear] = x;
        printf("Inserted %d into the queue\n", x);
    } else {
        rear++;
        queue[rear] = x;
        printf("Inserted %d into the queue\n", x);
    }
}

void dequeue() {
    if (front == -1 && rear == -1) {  // Queue is empty
        printf("Queue underflow\n");
    } else if (front == rear) {  // Only one element left in the queue
        printf("Dequeued element: %d\n", queue[front]);
        front = rear = -1;  // Reset queue to empty
    } else {
        printf("Dequeued element: %d\n", queue[front]);
        front++;
    }
}

void display() {
    if (front == -1 && rear == -1) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements are: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice, element;

    while (1) {
        printf("\nQueue Operations:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display Queue\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to enqueue: ");
                scanf("%d", &element);
                enqueue(element);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice, please try again.\n");
        }
    }

    return 0;
}
