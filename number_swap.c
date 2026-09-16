#include <stdio.h>

void swap(int *a, int *b){
    int f = *a;
    *a = *b;
    *b = f;
    printf("%d\n%d", *a, *b);
}

int main(){
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("\n");
    swap(&a, &b);
}
