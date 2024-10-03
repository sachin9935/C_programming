#include<stdio.h>
#define maxsize 5
int cq[maxsize],rear = -1,front = -1;

void Insert(){
    int n;
    if((rear+1)%maxsize==front){
        printf("Queue is overflow\n");
    }
    else{
        printf("Enter element:");
        scanf("%d",&n);
        if(rear==-1 && front==-1){
            rear = 0;
            front = 0;
        }
        else{
            rear = (rear+1)%maxsize;
        }
        cq[rear] = n;
    }
}


void Deleat1(){
    int n;
    if(rear==-1 && front==-1){
        printf("Queue is empty");
    }
    else{
        n=cq[front];
        if(front==rear){
            front = -1;
            rear = -1;
        }
        else{
            front = (front+1)%maxsize;
        }
        printf("Deleted element",n);
    }
}

void Display(){
    int i;
    if(rear==-1 && front==-1){
        printf("Queue is empty");
    }
    else{
        printf("Elements of Queue");
        for(i=front; i!=rear; (i=(i+1)%maxsize)){
            printf("%d ",cq[i]);
        }
        printf("%d ",cq[i]);
    }

}





int main(){
    int choise;
    do{printf("-------Circular Queue------\n");
    printf("\n 1. Insert \n 2. Delete \n 3. Display \n 4. Exit\n");
    printf("------------------\n");
    printf("Enter your choise...\n");
    scanf("%d",&choise);

    switch(choise){
        case 1: Insert();
        break;
        case 2: Deleat1();
        break;
        case 3: Display();
        break;
        default: 
        printf("Invalid print");

    }
    }while(choise!=4);

}