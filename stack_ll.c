#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *top = NULL;

void push(int value){
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = top;

    top = newNode;
}

void pop(){

    if(top == NULL){
        printf("stack is empty\n");
        return;
    }

    struct Node *temp = top;

    top = top->next;
    free(temp);
}

void display(){
    if(top == NULL){
        printf("Nothing to display\n");
        return;
    }

    struct Node *temp = top;

    while(temp != NULL){
        printf("%d", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main(void){
    int choice, value;
    while(1){
        printf("1)PUSH\n2)POP\n3)DISPLAY\n4)EXIT\n");
        scanf("%d", &choice);
        if(choice>4 && choice<1){
            printf("Invalid choice");
            exit(0);
        }

        switch (choice){
            case 1:
                printf("Enter Value: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice");
        }
    }
    return 0;
}
