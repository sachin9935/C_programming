#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    char* name;
    struct node* next;
};


struct node* Deleate_first_node(struct node* head){
    struct node* ptr = head;
    head = head->next;
    free(ptr);
    return head;
};


struct node* DeleationAt_last(struct node* head){
    struct node* p = head;
    struct node* q = head->next;
    while(q->next!=NULL){
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
    
};


struct node* DeleationAt_idx(struct node* head,int index){
    struct node* p = head;
    struct node* q = head->next;
    for(int i=0; i<index-1; i++){
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
};

struct node* DeleationBy_value(struct node* head,int data,char* name){
    struct node* p = head;
    struct node* q = head->next;
    while(q->data!=data && q->name!=name && q->next!=NULL){
        p = p->next;
        q = q->next;
    }
    if(q->data == data && q->name == name){
    p->next = q->next;
    free(q);
    }
    return head;
}

void treversion(struct node*ptr){
    printf("Elements of node:\n");
    while(ptr!=NULL){
    printf("data: %d\n",ptr->data);
    printf("name: %s\n",ptr->name);
    ptr = ptr->next;
    }
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

    head->data = 10;
    head->name = "Sachin";
    head->next = first;

    first->data = 20;
    first->name = "Anuj";
    first->next = secound;

    secound->data = 30;
    secound->name = "Satyam";
    secound->next = thired;

    thired->data = 40;
    thired->name = "Priyansu";
    thired->next = forth;

    forth->data = 50;
    forth->name = "Prabhat";
    forth->next = NULL;

    printf("Withoud Operations:\n");
    treversion(head);
    
    //Case 1:
    printf("Deleat the first node:\n");
    head = Deleate_first_node(head);
    treversion(head);

    //Case 2:
    printf("Deleat the last node: \n");
    head = DeleationAt_last(head);
    treversion(head);

    //Case 3:
    printf("Deleat the element at a given Index:\n");
    head = DeleationAt_idx(head,2);
    treversion(head);

    //Case 4:
    printf("Deleation with the given value:\n");
    head = DeleationBy_value(head,50,"Prabhat");
    treversion(head);


    return 0;

}