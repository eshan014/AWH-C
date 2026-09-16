#include <stdio.h>

int main(){
    int i=0;
    int j=0;
    int k=0;
    int a[5];
    int b[5];

    for(i=0;i<5;i++){
        scanf("%d", &a[i]);
    }
    for(i=0;i<5;i++){
        scanf("%d", &b[i]);
    }
    for(i=0;i<5-1;i++){
        for(j=0;j<5-1-i;j++){
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    for(i=0;i<5-1;i++){
        for(j=0;j<5-1-i;j++){
            if(b[j] > b[j+1]){
                int temp = b[j];
                b[j] = b[j+1];
                b[j+1] = temp;
            }
        }
    }

    int c[10];
    i=0;
    j=0;
    while(i<5 && j<5){
        if(a[i] < b[j]){
            c[k] = a[i];
            k++;
            i++;
        }
        else{
            c[k] = b[j];
            k++;
            j++;
        }
    }
    if(i<5){
        while(i<5){
            c[k] = a[i];
            i++;
            k++;
        }
    }
    else{
        while(j<5){
            c[k]=b[j];
            j++;
            k++;
        }
    }
    for(i=0;i<10;i++){
        printf("%d", c[i]);
    }
}
