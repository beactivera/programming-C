#include <stdio.h>
#include <stdbool.h>

bool liczba_pierwsza(int *liczba, int *licznik, bool *zlozonosc);

int main(){
    int n, i;
    bool zlozonosc = false;
    printf("Podaj liczbe: ");
    scanf("%d", &n);

    for (i = 2; i <= n / 2; ++i) {

        liczba_pierwsza(&n, &i, &zlozonosc);
    }

    if (n == 1) {
        printf("Nie jest to liczba pierwsza.\n");
    }
    else {
        if (zlozonosc)
            printf("%d nie jest liczba pierwsza.\n", n);
        else
            printf("%d jest liczba piersza.\n", n);
    }

    return 0;
}

bool liczba_pierwsza(int *liczba, int *licznik, bool *zlozonosc){

    if (*liczba % *licznik == 0) {
            *zlozonosc = true;
        }
}