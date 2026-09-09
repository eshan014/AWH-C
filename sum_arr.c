#include <stdio.h>

int factorial(int x){
    int fact = 1, i;
    for(i=x; i>=1; i--){
        fact = fact * i;
    }
    printf("%d\n", fact);
}

int main(){
    int x;
    scanf("%d", &x);
    factorial(x);
}
