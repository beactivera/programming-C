#include<time.h>
#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

void skopiuj_tablice(int[], int[], int);
void posortuj_tablice(int[], int);
bool swap(int*, int*);

int main()
{
  int dlugosc_tablicy = 20;
	/***** LOSOWANIE TABLICY ******/
	srand( time( NULL ) );      // inicjalizacja generatora liczb pseudolosowych
	int tab[dlugosc_tablicy];                // deklaracja tablicy
	for (int i=0; i<dlugosc_tablicy; i++)    // dla kazdego elementu
		 tab[i] = rand() % 20;   // 'wylosuj' liczbe z zakresu 0..19
	
	
	/***** Tutaj umieść rozwiązanie zadania ******/    
	int tab_posortowana[dlugosc_tablicy];
    
    skopiuj_tablice(tab, tab_posortowana, dlugosc_tablicy);
    posortuj_tablice(tab_posortowana, dlugosc_tablicy);

	/***** WYŚWIETLENIE ZAWARTOŚCI TABLICY ******/    
	printf("tab = [");
	for (int i=0; i<dlugosc_tablicy-1; i++)
		 printf("%d, ", tab[i]);
	printf("%d]\n", tab[dlugosc_tablicy-1]);
    
    printf("tab_posortowana = [");
	for (int i=0; i<dlugosc_tablicy-1; i++)
		 printf("%d, ", tab_posortowana[i]);
	printf("%d]\n", tab_posortowana[dlugosc_tablicy-1]);

    int maks = tab_posortowana[dlugosc_tablicy-1];

    int drugie_maks;
    for (int i = dlugosc_tablicy-2; i>=0; i--) {
        if (tab_posortowana[i] != maks) {
        drugie_maks = tab_posortowana[i];
        break;
        }
    }
    printf("Druga maksymalna wartosc to: %d\n", drugie_maks);

    //   int indeks;
    //   for (int i = 0; i<=dlugosc_tablicy; i++) {
    //       if (tab[i] == drugie_maks) {
    //           indeks = i;
    //           break;
    //       }
    //   }
    //   printf("Indeks drugiej maksymalnej wartosci: %d\n", indeks);
    
    int element;
    for (int i = 0; i<=dlugosc_tablicy; i++) {
        if (tab[i] == drugie_maks) {
            element = i+1;
            break;
        }
    }
    printf("Element drugiej maksymalnej wartosci: %d\n", element);
    
    return 0;
}


void skopiuj_tablice(int tab1[], int tab2[], int n) {
    for (int i=0; i<n; i++) {
        tab2[i] = tab1[i];
    }     
}

void posortuj_tablice(int tab[], int n) {
    int swaps;
    do {
        swaps = 0;
        for (int i = 0; i<n-1; i++) {
            if (swap(&tab[i], &tab[i+1])) {
                swaps += 1;
            }
        }

    } while (swaps != 0);
}

bool swap(int* a, int* b) {
    if (*a > *b) {
        int tmp = *a;
        *a = *b;
        *b = tmp;
        return true;
    }
    return false;
}