#include <stdio.h>
#include <math.h>

int main()
{
    // wymiary kwadratu
    int x_0, x_k, y_0, y_k;
    x_0 = -10;
    x_k = 10;
    y_0 = -10;
    y_k = 10;

    // współrzędne punktu
    int x,y;

    printf("Podaj wspolrzedna x: ");
    scanf("%i", &x);

    printf("Podaj wspolrzedna y: ");
    scanf("%i", &y);

    if (x_0 < x && x < x_k)
    {
        if( y_0 < y && y < y_k){
            printf("Punkt (%i, %i) znajduje sie w kwadracie.", x, y);
        }
        else{
            printf("Punkt (%i, %i) nie znajduje sie w kwadracie.", x, y);
        }

    }
    else
    {
        printf("Punkt (%i, %i) nie znajduje sie w kwadracie.", x, y);
    }

    return 0;
}