#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *insert(struct node *root, int value){\

    struct node *newNode, *temp, *parent;
    newNode = malloc(sizeof(struct node));

    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;

    if(root == NULL){
        return newNode;
    }

    temp = root;
    parent = NULL;

    while(temp != NULL){
        parent = temp;

        if(value < temp->data){
            temp = temp->left;
        }
        else if(value > temp->data){
            temp = temp->right;
        }
        else{
            free(newNode);
            return root;
        }
    }

    if(value > parent->data){
        parent->right = newNode;
    }
    else {
        parent->left = newNode;
    }

    return root;

}


void display(struct node *root){
    struct node *stack[100];
    int top = -1;

    struct node *temp = root;

    while(temp != NULL || top != -1){
        while(temp != NULL){
            stack[++top] = temp;
            temp = temp->left;
        }

        temp = stack[top--];
        printf("%d ", temp->data);
        temp = temp->right;
    }
    printf("\n");
}

void preorder(struct node *root){
    if(root == NULL)
        return;

    printf("%d\n", root->data);
    preorder(root->left);
    preorder(root->right);
}

void postorder(struct node *root){
    if(root == NULL)
        return;

    postorder(root->left);
    postorder(root->right);
    printf("%d\n", root->data);
}







int main(){
    struct node *root = NULL;
    int option, value;

    while(1){
        printf("1)Inorder\n2)Insert\n3)Delete\n4)Preorder\n5)Postorder\n6)Exit\n");
        printf("Enter option: ");
        scanf("%d", &option);
        if(option < 1 | option > 4){
            printf("choose a valid option");
            break;
        }

        switch (option){
            case 1:
                display(root);
                break;
            case 2:
                printf("Insert value: ");
                scanf("%d", &value);
                root = insert(root, value);
                break;
            case 3:
                printf("Value to delete: ");
                scanf("%d", &value);
                break;
            case 4:
                preorder(root);
                break;
            case 5:
                postorder(root);
                break;
            case 6:
                exit(0);

            }
    }
}

