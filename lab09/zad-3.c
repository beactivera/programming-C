#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int tablicaLos1(int tab[], int n);
int tablicaLos2(int* pocz, int* kon);

int main(){

    int tab[5];
    int wynik1 = tablicaLos1(tab, 6);
    printf("\n");
    int wynik2 = tablicaLos2(tab, tab+6);
    

    return 0;
}

int tablicaLos1(int tab[], int n){
    printf("tab1 = [ ");
    /***** LOSOWANIE TABLICY ******/
	srand( time( NULL ) );      // inicjalizacja generatora liczb pseudolosowych
	for (int i=0; i<n; i++){    
		 tab[i] = rand() % 20;   // 'wylosuj' liczbe z zakresu 0..19
         printf("%d ", tab[i]);
    }
	printf("]");
}

int tablicaLos2( int* pocz, int* kon){
    int *pt;
    printf("tab2 = [ ");
    /***** LOSOWANIE TABLICY ******/
	srand( time( NULL ) );      // inicjalizacja generatora liczb pseudolosowych
	for (pt = pocz; pt!=kon; pt++){ 
        *pt = rand() % 20;   // 'wylosuj' liczbe z zakresu 0..19
        printf("%d ", *pt);
    } 
	printf("]");	 

}