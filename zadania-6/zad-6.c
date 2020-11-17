#include<time.h>
#include<stdlib.h>
#include<stdio.h>

int main()
{
    int n, licz_mniej=0, licz_wiecej=0, licz_rowne=0;

    /***** LOSOWANIE TABLICY ******/
    srand( time( NULL ) );      // inicjalizacja generatora liczb pseudolosowych
    int tab[20];                // deklaracja tablicy
    for (int i=0; i<20; i++)    // dla kazdego elementu
         tab[i] = rand() % 20;   // 'wylosuj' liczbe z zakresu 0..19
    
    
    /***** Tutaj umieść rozwiązanie zadania ******/    
    printf("Podaj szukaną liczbę: ");
    scanf("%d", &n);
    
    for(int i=0; i<19; i++){
        
        if(n == tab[i])
            licz_rowne++;
        if(n > tab[i])
            licz_wiecej++;
        if(n < tab[i])
            licz_mniej++;
    }

    printf("Liczba ta występuje %d razy, jest %d liczb wiekszych od niej i %d liczb mniejszych od niej.\n",licz_rowne, licz_wiecej,licz_mniej);
    
    /***** WYŚWIETLENIE ZAWARTOŚCI TABLICY ******/    
    printf("tab = [");
    for (int i=0; i<19; i++)
         printf("%d, ", tab[i]);
    printf("%d]\n", tab[19]);
}