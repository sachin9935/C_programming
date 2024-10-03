#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    int number;
    struct Node* next;
};

void traversalList(struct Node* ptr){
    while(ptr!=NULL){
    printf("Element/data: %d\n",ptr->data);
    printf("Number : %d\n",ptr->number);
    ptr = ptr->next;
    }
}

int main(){
    
    struct Node* head;
    struct Node* first;
    struct Node* secound;
    
    head = (struct Node*)malloc(sizeof(struct Node));
    first = (struct Node*)malloc(sizeof(struct Node));
    secound = (struct Node*)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = first;


    first->data = 20;
    first->next = secound;
    first->number = 839247284;

    secound->data = 30;
    secound->next = NULL;
    secound->number = 839247284;

    traversalList(head);

    return 0;

}