#include <stdio.h>
#include <math.h>

int liczba_cyfr(unsigned int *p);

int main(){
    
    unsigned int liczba;
    printf("Podaj liczbe calkowita: ");
    scanf("%d", &liczba);

    int wynik = liczba_cyfr(&liczba);

    printf("Liczba cyfr: %d\n", wynik);

    return 0;

}
int liczba_cyfr(unsigned int *p){

    int licznik = 0;
    while( *p != 0){
        
        *p /= 10;
        licznik++;
    }
    return licznik;

}