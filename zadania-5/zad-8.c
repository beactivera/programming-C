#include<time.h>
#include<stdlib.h>
#include<stdio.h>

int main()
{
    int suma_prefiksowa = 0, nowa_tablica[20];
	/***** LOSOWANIE TABLICY ******/
	srand( time( NULL ) );      // inicjalizacja generatora liczb pseudolosowych
	int tab[20];                // deklaracja tablicy
	for (int i=0; i<20; i++)    // dla kazdego elementu
		 tab[i] = rand() % 20;   // 'wylosuj' liczbe z zakresu 0..19
	
	
	/***** Tutaj umieść rozwiązanie zadania ******/
    for(int i=0; i<20; i++){   
		nowa_tablica[i] = suma_prefiksowa; 
	    printf("Niech i = %d, tab[%d] = %d, to suma_prefiksowa[%d] = %d \n", i,i,tab[i],i, suma_prefiksowa);
        suma_prefiksowa += tab[i];
    }

	printf("Twoja tablica sum prefiksowych: [");
	for (int i=0; i<20; i++)
		 printf("%d, ", nowa_tablica[i]);
	printf("%d]\n", nowa_tablica[19]);

	return 0;
}

