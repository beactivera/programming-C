#include <stdio.h>
#include <stdbool.h>

bool liczby_pitagorejskie(int *a, int *b, int *c, bool *pitagorejskie);

int main(){

    int a,b,c;
    bool pitagorejskie = false;

    printf("Podaj pierwsza liczbe: ");
    scanf("%d", &a);
    printf("Podaj druga liczbe: ");
    scanf("%d", &b);
    printf("Podaj trzecia liczbe: ");
    scanf("%d", &c);

    liczby_pitagorejskie(&a, &b, &c, &pitagorejskie);

    if (pitagorejskie) {
        printf("Sa to liczby pitagorejskie.\n");
    }
    else {
        printf("NIE sa to liczby pitagorejskie.\n");
    }

    return 0;
}

bool liczby_pitagorejskie(int *a, int *b, int *c, bool *pitagorejskie){

    if (*a * (*a) + *b * (*b) == *c * (*c)){
            *pitagorejskie = true;
        }
}