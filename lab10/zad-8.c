#include<stdio.h>
#include <stdlib.h>

int main() {
    
    char lancuch[10];
    printf ("Podaj lancuch: ");
    fgets(lancuch,10,stdin);
    int x = atoi(lancuch);
    printf("Liczba:  %d\n", x);

    return 0;
}