#include <stdio.h>
#include <stdlib.h>

int main(){
    int stack[100];
    int size;
    printf("Size: ");
    scanf("%d", &size);
    int val, ch, i;
    int top = -1;
    if(size<=0 && size<100){
        printf("Invalid size, choose under 100\n");
    }

    while(1){
        printf("1)Insert\n2)Delete\n3)Display\n4)Exit\n");
        scanf("%d", &ch);
        if(ch==1){
            if(top==size-1){
                printf("Stack Overflow\n");
            }
            else{
                scanf("%d", &val);
                top++;
                stack[top] = val;
            }
        }

        else if(ch==2){
            if(top==-1){
                printf("Stack Underflow\n");
            }
            else{
                top--;
            }
        }

        else if(ch==3){
            if(top==-1){
                printf("Nothing to display\n");
            }
            else{
                for(i=top; i>=0; i--){
                    printf("%d\n", stack[i]);
                }
            }
        }
        else if(ch==4){
            exit(0);
        }
        else{
            printf("Choose a valid option from 1 to 4\n");
        }
    }
}
