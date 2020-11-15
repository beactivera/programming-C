#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>


int permutacja(int tab[], int N, int dlugosc){

    int k = dlugosc;
    int tabA[k], N;
    int podzb[k];
    int i = 0;

    for(int i = 0; i<k; i++){
        podzb[i] = i + 1;
    }

    do{
        for (int i=0; i<k; i++){
            printf("%d", podzb[i]);
        }

        i = k-1;

        while(i>=0 && podzb[i] == N-k+i+1)
            i--;
        
        if(i >= 0){
            podzb[i]++;
            for(int j=i+1; j<k; j++){
                podzb[j] = podzb[j-1] + 1;
            }
        }
        else{
            printf("Nie da sie permutowac.");
            break;
        }

    }while(i>=0)

    printf("Da sie permutowac.");

}

int main(){

    int tabA[];
    int N = 100;
    int k = 10;

    int rozw;

    /***** LOSOWANIE TABLICY ******/
	srand( time( NULL ) );      // inicjalizacja generatora liczb pseudolosowych
	int tabA[k];                // deklaracja tablicy
	for (int i=0; i<k; i++)    // dla kazdego elementu
		 tabA[i] = rand() % N;   // 'wylosuj' liczbe z zakresu 0..19

    
    printf("wylosowanaTablica = [");
	for (int i=0; i<k-1; i++)
		 printf("%d, ", tabA[i]);
	printf("%d]\n", tabA[k-1]);

    /***** Tutaj umieść rozwiązanie zadania ******/    

    rozw = permutacja(tabA,N, k);

    printf("%d",rozw);

    /***** WYŚWIETLENIE ZAWARTOŚCI TABLICY ******/    
	printf("A = [");
	for (int i=0; i<N-1; i++)
		 printf("%d, ", tabA[i]);
	printf("%d]\n", tabA[N-1]);


}