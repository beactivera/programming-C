#include <stdio.h>

void swap(int*, int*);
void sort(int*, int*, int*, int*);

int main(){

    int a,b,c,d;

    sort(&a, &b, &c, &d);

    printf("%d, %d, %d, %d\n", a, b, c, d);

    return 0;
}

void swap(int* first, int* second) {
    if (*second > *first) {
        int tmp = *first;
        *first = *second;
        *second = tmp;
    }
}

void sort(int* a, int* b , int* c, int* d) {
    printf("Podaj a: ");
    scanf("%d", a);
    printf("Podaj b: ");
    scanf("%d", b);
    printf("Podaj c: ");
    scanf("%d", c);
    printf("Podaj d: ");
    scanf("%d", d);

    swap(a, b);
    swap(a, c);
    swap(a, d);
    swap(b, c);
    swap(b, d);
    swap(c, d);
}
