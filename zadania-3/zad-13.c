#include <math.h>
#include <stdio.h>

int main() {

    int binarny, dziesietny = 0, liczba, baza = 1, reszta;

    printf("Podaj liczbe w systemie binarnym: ");
    scanf("%d", &liczba);

    binarny = liczba;

    while(liczba >0) {
        reszta = liczba%10;
        dziesietny += reszta * baza;
        liczba /= 10;
        baza = baza *2;
    }

    printf("Podana liczba w systemie dziesietnym wynosi: = %d\n", dziesietny);

    return 0;
}