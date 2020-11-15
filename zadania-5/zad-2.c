#include<time.h>
#include<stdlib.h>
#include<stdio.h>

int main()
{
	/***** LOSOWANIE TABLICY ******/
	srand( time( NULL ) );      // inicjalizacja generatora liczb pseudolosowych
	int tab[20];                // deklaracja tablicy
	printf("tab=[ ");
	for (int i=0; i<20; i++)
	{   // dla kazdego elementu
		 tab[i] = rand() % 20;   // 'wylosuj' liczbe z zakresu 0..19
		 printf("%d, ", tab[i]);
	}

	printf("%d]\n", tab[19]);
	
	// /***** WYŚWIETLENIE ZAWARTOŚCI TABLICY ******/    
	// printf("tab = [");
	// for (int i=0; i<19; i++)
	// 	 printf("%d, ", tab[i]);
	// printf("%d]\n", tab[19]);
}

