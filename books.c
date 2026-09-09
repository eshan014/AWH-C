#include <stdio.h>

struct books {
    int bookid;
    char bname[50];
    char aname[30];
    float price;
};

int main(){
    int n, i;
    printf("Total Books: ");
    scanf("%d", &n);
    struct books b[n];
    for(i=0; i<n; i++){
        printf("Book id: ");
        scanf("%d", &b[i].bookid);
        printf("Book name: ");
        scanf("%s", b[i].bname);
        printf("Author name: ");
        scanf("%s", b[i].aname);
        printf("Price: ");
        scanf("%f", &b[i].price);
        printf("\n");
    }
    for(i=0;i<n;i++){
        printf("Book name: %s\nBook id: %d\nAuthor: %s\nPrice: %f\n", b[i].bname, b[i].bookid, b[i].aname, b[i].price);
        printf("\n");
    }
}
