#include<time.h>
#include<stdlib.h>
#include<stdio.h>

int main()
{
    int n, licznik = -1;

    /***** LOSOWANIE TABLICY ******/
    srand( time( NULL ) );      // inicjalizacja generatora liczb pseudolosowych
    int tab[20];                // deklaracja tablicy
    for (int i=0; i<20; i++)    // dla kazdego elementu
         tab[i] = rand() % 20;   // 'wylosuj' liczbe z zakresu 0..19
    
    
    /***** Tutaj umieść rozwiązanie zadania ******/    
    printf("Podaj szukaną liczbę: ");
    scanf("%d", &n);
    // sprawdzamy dla kazdego elementu w tablicy czy podana liczba istnieje, wynikiem warunku bedzie ostatni indeks w ktorym wystapi szukana liczba
    for(int i=0;i<20;i++){
        if(n == tab[i]){
            licznik = i;
        }
    }
    if(licznik >= 0){
        printf("Ostatni indeks szukanej liczby to: %d \n",licznik);
    }else{
        printf("Szukana liczba nie znajduje się w tablicy \n");
    }
    
    /***** WYŚWIETLENIE ZAWARTOŚCI TABLICY ******/    
    printf("tab = [");
    for (int i=0; i<19; i++)
         printf("%d, ", tab[i]);
    printf("%d]\n", tab[19]);
}