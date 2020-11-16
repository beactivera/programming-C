#include<time.h>
#include<stdlib.h>
#include<stdio.h>

int find_maximum(int[], int);
int find_minimum(int[], int);
int find_mean(int[], int);

int main()
{
    int location_max, location_min, maximum, minimum, mean;
	/***** LOSOWANIE TABLICY ******/
	srand( time( NULL ) );      // inicjalizacja generatora liczb pseudolosowych
	int tab[20];                // deklaracja tablicy
	for (int i=0; i<20; i++)    // dla kazdego elementu
		 tab[i] = rand() % 20;   // 'wylosuj' liczbe z zakresu 0..19
	
    /***** WYŚWIETLENIE ZAWARTOŚCI TABLICY ******/    
	printf("wylosowania tablica = [");
	for (int i=0; i<19; i++)
		 printf("%d, ", tab[i]);
	printf("%d]\n", tab[19]);


	
	/***** Tutaj umieść rozwiązanie zadania ******/    
	location_max = find_maximum(tab, 20);
    maximum  = tab[location_max];
    location_min = find_minimum(tab, 20);
    minimum  = tab[location_min];
    mean = find_mean(tab, 20);

    printf("Maksymalny element na pozycji %d ma wartosc %d.\n", location_max + 1, maximum);
    printf("Minimalny element na pozycji %d ma wartosc %d.\n", location_min + 1, minimum);
    printf("Srednia wartosci tablicy wynosi: %d.\n", mean);

}

int find_maximum(int a[], int n) {
  int c, index = 0;

  for (c = 1; c < n; c++)
    if (a[c] > a[index])
      index = c;

  return index;
}

int find_minimum(int a[], int n) {
  int c, index = 0;

  for (c = 1; c < n; c++)
    if (a[c] < a[index])
      index = c;

  return index;
}

int find_mean(int a[], int n) {
  int c, sum =0;
  float avg;

  for(c=0; c<n; c++){
      sum += a[c];
  }
  
  avg = sum/c;

  return avg;
}
