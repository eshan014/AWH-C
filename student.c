#include <stdio.h>

struct students {
    int rollno;
    char name[50];
    int mat;
    int phy;
    int cs;
};

int main(){
    int n, i;
    printf("Total Students:" );
    scanf("%d", &n);
    struct students s[n];
    for(i=0; i<n; i++){
        printf("Roll No: ");
        scanf("%d", &s[i].rollno);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Maths mark: ");
        scanf("%d", &s[i].mat);
        printf("Physics mark: ");
        scanf("%d", &s[i].phy);
        printf("CS marks: ");
        scanf("%d", &s[i].cs);
        printf("\n");
    }
    int avg;
    for(i=0;i<n;i++){
        avg = (s[i].mat + s[i].phy + s[i].cs) / 3;
        printf("Name: %s\nRoll No: %d\nAverage: %d\n", s[i].name, s[i].rollno, avg);
        printf("\n");
    }
}

