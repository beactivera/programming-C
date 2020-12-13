#define N 20

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int k;

    /***** LOSOWANIE TABLICY ******/
	srand( time( NULL ) );      // inicjalizacja generatora liczb pseudolosowych
	int tabA[N];                // deklaracja tablicy
	for (int i=0; i<N; i++)    // dla kazdego elementu
		 tabA[i] = rand() % N;   // 'wylosuj' liczbe z zakresu 0..19

    printf("wylosowanaTablica = [");
	for (int i=0; i<N-1; i++)
		 printf("%d, ", tabA[i]);
	printf("%d]\n", tabA[N-1]);

    /***** Tutaj umieść rozwiązanie zadania ******/    
    
    printf("Podaj liczbe naturalna wieksza od 1: ");
    scanf("%d",&k);


    for(int i = 0; i < N; i++){
        tabA[i] = tabA[(i+k)%N];
    };

    /***** WYŚWIETLENIE ZAWARTOŚCI TABLICY ******/    
	printf("A = [");
	for (int i=0; i<N-1; i++)
		 printf("%d, ", tabA[i]);
	printf("%d]\n", tabA[N-1]);

}