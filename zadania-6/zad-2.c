#include<time.h>
#include<stdlib.h>
#include<stdio.h>

int main()
{
    int n, licznik = 0;

	/***** LOSOWANIE TABLICY ******/
	srand( time( NULL ) );      // inicjalizacja generatora liczb pseudolosowych
	int tab[20];                // deklaracja tablicy
	tab[0] = rand() % 5;        // 'wylosuj' liczbe z zakresu 0...4
	for (int i=1; i<20; i++)    // dla kazdego elementu
		 tab[i] = tab[i-1] + rand() % 3;   // 'wylosuj' liczbe z zakresu 0...2 i dodaj do poprzedniego elementu
	
	/***** Tutaj umieść rozwiązanie zadania ******/    
	printf("Podaj szukaną liczbę: ");
    scanf("%d", &n);

    for(int i=0; i<20; i++){
        if(n == tab[i])
            licznik++;
    }
    
    if(licznik>=1)
        printf("Szukana liczba %d znajduje sie w tablicy.\n",n);
    else
        printf("Szukana liczba %d NIE znajduje sie w tablicy.\n",n);

	
	/***** WYŚWIETLENIE ZAWARTOŚCI TABLICY ******/    
	printf("tab = [");
	for (int i=0; i<19; i++)
		 printf("%d, ", tab[i]);
	printf("%d]\n", tab[19]);
}