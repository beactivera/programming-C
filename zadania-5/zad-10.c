#include<time.h>
#include<stdlib.h>
#include<stdio.h>

int find_maximum(int[], int);
int find_minimum(int[], int);
int find_mean(int[], int);

int main()
{
    int n=20,tab[n],location_max, location_max2, maximum, maximum2;
	/***** LOSOWANIE TABLICY ******/
	srand( time( NULL ) );      // inicjalizacja generatora liczb pseudolosowych
	for (int i=0; i<20; i++)    // dla kazdego elementu
		 tab[i] = rand() % 20;   // 'wylosuj' liczbe z zakresu 0..19
	
    /***** WYŚWIETLENIE ZAWARTOŚCI TABLICY ******/    
	printf("wylosowana tablica = [");
	for (int i=0; i<19; i++)
		 printf("%d, ", tab[i]);
	printf("%d]\n", tab[19]);
	
	/***** Tutaj umieść rozwiązanie zadania ******/ 
	location_max = find_maximum(tab,n);
    maximum  = tab[location_max];


    for(int j = location_max; j < n-1; j++){
        tab[j]  = tab[j+1];
    } 

    location_max2 = find_maximum(tab,n-1);
    maximum2  = tab[location_max2];

    printf("Maksymalny element na pozycji %d ma wartosc %d.\n", location_max + 1, maximum);
    printf("Drugi maksymalny element na pozycji %d ma wartosc %d.\n", location_max2 + 1, maximum2);
    
}

int find_maximum(int a[], int n) {
  int c, index = 0;

  for (c = 1; c < n; c++)
    if (a[c] > a[index])
      index = c;

  return index;
}