#include <stdio.h>

void largest(int *a, int *b){
    if(*a>*b){
        printf("%d is larger\n", *a);
    }
    else{
        printf("%d is larger", *b);
    }
}

int main(){
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("\n");
    largest(&a, &b);
}
