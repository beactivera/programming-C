#include "biblioteka1.h"
#include <stdio.h>
int main ()
{
      int k;
    printf("Podaj liczbe k: ");
    scanf("%d", &k);
    struct Ulamek ulamki[k];
    struct Ulamek wynik_sumy;
    wynik_sumy.licznik = 0;
    wynik_sumy.mianownik = 0;
    for(int i = 1; i<k+1; i++){
        ulamki[i].licznik = 1;
        ulamki[i].mianownik = i;
    }

    for(int j =1 ; j<k+1; j++){
        wynik_sumy += suma(ulamki[j], ulamki[j+1]);

    }
    
    return 0;
} 