#include<time.h>
#include<stdlib.h>
#include<stdio.h>

int main()
{
	/***** LOSOWANIE TABLICY ******/
	srand( time( NULL ) );      // inicjalizacja generatora liczb pseudolosowych
	int tab[20];                // deklaracja tablicy
	tab[0] = rand() % 5;        // 'wylosuj' liczbe z zakresu 0...4
	for (int i=1; i<20; i++)    // dla kazdego elementu
		 tab[i] = tab[i-1] + rand() % 3;   // 'wylosuj' liczbe z zakresu 0...2 i dodaj do poprzedniego elementu
	
	/***** Tutaj umieść rozwiązanie zadania ******/    
	
	
	/***** WYŚWIETLENIE ZAWARTOŚCI TABLICY ******/    
	printf("tab = [");
	for (int i=0; i<19; i++)
		 printf("%d, ", tab[i]);
	printf("%d]\n", tab[19]);
}
