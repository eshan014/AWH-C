#include <stdio.h>
#include <stdlib.h>
#define SIZE 5


int queue[SIZE];
int front = -1;
int rear = -1;

void enqueue(int value){
    if(((rear+1) % SIZE)==front){
        printf("Queue is full\n");
        return;
    }
    if(front==-1){
        front=0;
    }

    rear = (rear+1) % SIZE;
    queue[rear] = value;
}

void dequeue(){
    if(front==-1){
        printf("Queue is empty\n");
        return;
    }

    if(front==rear){
        front=rear=-1;
    }
    else{
        front=(front+1)%SIZE;
    }
}

void display(){
    if(front==-1){
        printf("Queue is empty\n");
    }
    int i=front;

    while(1){
        printf("%d ", queue[i]);
        if(i==rear){
            break;
        }
        i = (i+1)%SIZE;
    }
    printf("\n");
}


int main(){
    int choice, value;

    while(1){
        printf("1)Enqueue\n2)Dequeue\n3)Display\n4)Exit\n");
        printf("Option: ");
        scanf("%d", &choice);

        switch (choice){
            case 1:
                printf("Value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
        }
    }
}

