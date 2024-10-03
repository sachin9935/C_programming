#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head = 0, *newnode, *temp;
    int choice = 1; // initialize choice to enter the loop

    while (choice) {
        newnode = (struct node*) malloc(sizeof(struct node)); // correct malloc
        if (newnode == NULL) {
            printf("Memory allocation failed\n");
            return 1;
        }

        printf("Enter data: ");
        scanf("%d", &newnode->data); // corrected scanf

        newnode->next = 0; // set the next pointer to NULL
        if (head == 0) {
            head = temp = newnode; // set head to the first node
        } else {
            temp->next = newnode; // link the new node
            temp = newnode; // move temp to the new node
        }

        printf("Do you want to continue (0,1)? ");
        scanf("%d", &choice); // take user's choice
    }


    // Printing the linklist...
    temp = head;
    printf("Linked List: ");
    while (temp != 0) {
        printf("%d -> ", temp->data); // print the data of each node
        temp = temp->next; // move to the next node
    }
    printf("NULL\n"); // indicate the end of the list

    return 0;
}
