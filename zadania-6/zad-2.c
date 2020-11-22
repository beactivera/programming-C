#include<time.h>
#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

int main()
{
	/***** LOSOWANIE TABLICY ******/
	srand( time( NULL ) );      // inicjalizacja generatora liczb pseudolosowych
	int tab[20];                // deklaracja tablicy
	for (int i=0; i<20; i++)    // dla kazdego elementu
		 tab[i] = rand() % 20;   // 'wylosuj' liczbe z zakresu 0..19
	
	
	/***** Tutaj umieść rozwiązanie zadania ******/    

	printf("Podaj szukany element: ");
	int x;
	scanf("%d", &x);

	bool znaleziony = false;
	for (int i = 0; i<20; i++) {
		if (tab[i] == x) {
			znaleziony = true;
			break;
		}
	}
	if (znaleziony) {
		printf("Element %d znajduje się w tablicy.\n", x);
	}
	else {
		printf("Element %d NIE znajduje się w tablicy.\n", x);
	}

	/***** WYŚWIETLENIE ZAWARTOŚCI TABLICY ******/    
    printf("tab = [");
    for (int i=0; i<19; i++)
         printf("%d, ", tab[i]);
    printf("%d]\n", tab[19]);

	return 0;
}