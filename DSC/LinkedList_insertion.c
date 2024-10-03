#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

void treversion(struct node* ptr){ // print the elements..
    while(ptr!=NULL){
        printf("Elements: %d\n",ptr->data);
        ptr = ptr->next;
    }
}


struct node* insertAtend(struct node* head,int item){
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = item;
    struct node* p = head;
    while(p->next!=NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
}


struct node* InsertAtFirst(struct node* head,int data){
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = data;
    
    return ptr;
}

struct node* insertAfter_Node(struct node* head,struct node* previous_Node,int data){
    struct node* ptr = (struct node* )malloc(sizeof(struct node));
    ptr->data = data;

    ptr->next = previous_Node->next;
    previous_Node->next = ptr;
    return head;
}


int main(){
    struct node* head;
    struct node* first;
    struct node* secound;
    struct node* thired;
    struct node* forth;

    head = (struct node*)malloc(sizeof(struct node));
    first = (struct node*)malloc(sizeof(struct node));
    secound = (struct node*)malloc(sizeof(struct node));
    thired = (struct node*)malloc(sizeof(struct node));
    forth = (struct node*)malloc(sizeof(struct node));


    //linking the all nodes...
    head->data = 10;
    head->next = first;

    first->data = 20;
    first->next = secound;

    secound->data = 30;
    secound->next = thired;

    thired->data = 40;
    thired->next = forth;

    forth->data = 50;
    forth->next = NULL;

    printf("Element without operation:\n");
    treversion(head);

    printf("After insertion\n");
    head = InsertAtFirst(head,5);
    treversion(head);

    printf("Insert at the end: \n");
    insertAtend(head,60);
    treversion(head);

    printf("Insert after node:\n");
    head = insertAfter_Node(head,first,100);
    treversion(head);

    return 0;
}