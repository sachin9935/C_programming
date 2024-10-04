#include <stdio.h>
#include <stdlib.h>

struct node {
    int data1;
    char* person1;
    struct node* next;
};

void triversion1(struct node* ptr) {
    while (ptr != NULL) {
        printf("Data: %d\n", ptr->data1);
        printf("Name: %s\n", ptr->person1);
        ptr = ptr->next;
    }
}

void triversion2(struct node* head) {
    struct node* ptr = head;
    if (head != NULL) {
        do {
            printf("Data: %d\n", ptr->data1);
            printf("Name: %s\n", ptr->person1);
            ptr = ptr->next;
        } while (ptr != head);
    }
}

struct node* insertAtFirst(struct node* head, int data, char* name) {
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data1 = data;
    ptr->person1 = name;
    
    // If the list is empty
    if (head == NULL) {
        ptr->next = ptr;  // Pointing to itself to form a circular link
        return ptr;
    }

    struct node* p = head;
    while (p->next != head) {
        p = p->next;
    }
    
    // Inserting the new node at the beginning and updating links
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    
    return head;
}

int main() {
    struct node* head;
    struct node* first;
    struct node* second;
    struct node* third;

    // Allocating memory for nodes
    head = (struct node*)malloc(sizeof(struct node));
    first = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));

    // Assigning data and linking nodes
    head->data1 = 10;
    head->person1 = "Sachin";
    head->next = first;

    first->data1 = 20;
    first->person1 = "Anuj";
    first->next = second;

    second->data1 = 30;
    second->person1 = "Satyam";
    second->next = third;

    third->data1 = 40;
    third->person1 = "Tarun";
    third->next = head;  // Making the list circular by pointing back to head

    // Printing the original circular linked list
    printf("Original Elements:\n");
    triversion2(head);

    // Inserting a new node at the beginning
    printf("\nAfter insertion:\n");
    head = insertAtFirst(head, 100, "Priyanshu");
    triversion2(head);

    return 0;
}
