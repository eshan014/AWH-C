#include <stdio.h>

int largest(int arr[], int a){
    int large = arr[0];
    int i, w;
    for(i=1; i<a; i++){
        if(arr[i]>large){
            large = arr[i];
        }
    }
    printf("%d is the largest\n", large);
}

int main(){
    int i, a;
    printf("Enter array length: ");
    scanf("%d", &a);
    int arr[a];
    for(i=0; i<a; i++){
        scanf("%d", &arr[i]);
    }
    largest(arr, a);
}

