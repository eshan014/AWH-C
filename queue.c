#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Size: \n");
    scanf("%d", &n);
    int queue[n];
    int ch, val, i;
    int f=-1;
    int r=-1;
    if(n<=0){
        printf("Enter valid size");
    }

    while(1){
        printf("1)Enqueue\n2)Dequeue\n3)Display\n4)Exit\n");
        scanf("%d", &ch);

        if(ch==1){
            if(r==n-1){
                printf("Queue is full\n");
            }
            else{
                printf("Enter value: ");
                scanf("%d", &val);
                r++;
                queue[r] = val;

                if(f==-1){
                    f++;
                }
            }
        }

        else if(ch==3){
            if(f==-1 || f>r){
                printf("Nothing to display\n");
            }
            else{
                for(i=f; i<=r; i++){
                    printf("%d\n", queue[i]);
                }
            }
        }

        else if(ch==2){
            if(r==n-1){
                printf("Nothing to dequeue\n");
            }
            else{
                f++;
            }
        }
        else if(ch==4){
            exit(0);
        }

        else{
            printf("Choose a valid option, from 1 to 4\n");
        }
    }
}
