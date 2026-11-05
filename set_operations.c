#include <stdio.h>
#define SIZE 9
typedef struct { unsigned char x : 1; } bit;
/* universal set (hardcoded) */
const int uset[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
void readset(bit a[], int n);
void printset(const bit a[]);
void unionset(const bit a[], const bit b[], bit c[]);
void intersect(const bit a[], const bit b[], bit c[]);
void difference(const bit a[], const bit b[], bit c[]);
int main(void)
{
bit a[SIZE] = {{0}}, b[SIZE] = {{0}}, c[SIZE] = {{0}};
int n;
printf("Universal set: {1,2,3,4,5,6,7,8,9}\n\n");
printf("No. of elements in set A: ");
if (scanf("%d", &n) != 1) return 1;
readset(a, n);
printf("No. of elements in set B: ");
if (scanf("%d", &n) != 1) return 1;
readset(b, n);
printf("\nSet A: ");
printset(a);
printf("Set B: ");
printset(b);
unionset(a, b, c);
printf("\n\tA U B = ");
printset(c);
intersect(a, b, c);
printf("\n\tA intersect B = ");
printset(c);
difference(a, b, c);
printf("\n\tA - B = ");
printset(c);
return 0;
}
/* Read n elements of a subset and store as a bit string */
void readset(bit a[], int n)
{
int i, k, x;
if (n < 0 || n > SIZE) {
printf("Invalid size; must be between 0 and %d.\n", SIZE);
return;
}
printf("Enter %d elements: ", n);
for (i = 0; i < n; i++) {
if (scanf("%d", &x) != 1) return;
for (k = 0; k < SIZE; k++) {
if (uset[k] == x) { a[k].x = 1; break; }
}
if (k == SIZE)
printf("%d is not in the universal set, ignored.\n", x);
}
}
/* Print a set from its bit string representation */
void printset(const bit a[])
{
int k, first = 1;
printf("{");
for (k = 0; k < SIZE; k++) {
if (a[k].x) {
printf(first ? "%d" : ",%d", uset[k]);
first = 0;
}
}
printf("}\n");
}
void unionset(const bit a[], const bit b[], bit c[])
{
for (int k = 0; k < SIZE; k++)
c[k].x = a[k].x | b[k].x;
}
void intersect(const bit a[], const bit b[], bit c[])
{
for (int k = 0; k < SIZE; k++)
c[k].x = a[k].x & b[k].x;
}
void difference(const bit a[], const bit b[], bit c[])
{
for (int k = 0; k < SIZE; k++)
c[k].x = a[k].x && !b[k].x;
}
