#include <stdio.h>

int main() 
{
    int n, i, x = 0;
    printf("Podaj liczbe: ");
    scanf("%d", &n);

    for (i = 2; i <= n / 2; ++i) {

        // warunek na zlozona liczbe
        if (n % i == 0) {
            x = 1;
            break;
        }
    }

    if (n == 1) {
        printf("Nie jest to liczba pierwsza");
    }
    else {
        if (x == 0)
            printf("%d jest liczba pierwsza.", n);
        else
            printf("%d nie jest liczba pierwsza.", n);
    }

    return 0;
}