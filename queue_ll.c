#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *front = NULL;
struct Node *rear = NULL;

void enqueue(int value){
   struct Node *newNode = malloc(sizeof(struct Node));

   newNode->data = value;
   newNode->next = NULL;

   if(front==NULL){
       front=newNode;
       rear=newNode;
   }
   else{
       rear->next=newNode;
       rear=newNode;
   }
}

void dequeue(){
    if(front==NULL){
        printf("Nothing to dequeue");
        return;
    }

    struct Node *temp = front;
    front = front->next;
    free(temp);

    if(front==NULL){
        rear=NULL;
    }
}

void display(){
    struct Node *temp = front;

    while(temp != NULL){
        printf("%d\n", temp->data);
        temp=temp->next;
    }
    printf("\n");
}


int main(void){
    int choice, value, option;
    while(1){
        printf("1)Enqueue\n2)Dequeue\n3)Display\n");
        printf("Option: ");
        scanf("%d", &choice);
        if(choice < 1 && choice > 3){
            printf("Enter a valid choice");
            exit(0);
        }
        switch (choice){
            case 1:
                printf("Value: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}

