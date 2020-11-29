#include <stdio.h>

int swap(int*, int*);

int main(){
    
    int a = 6;
    int b = 10;

    swap(&a,&b);

    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}

int swap(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}