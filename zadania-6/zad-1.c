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
	tab[0] = rand() % 5;        // 'wylosuj' liczbe z zakresu 0...4
	for (int i=1; i<20; i++)    // dla kazdego elementu
		 tab[i] = tab[i-1] + rand() % 3;   // 'wylosuj' liczbe z zakresu 0...2 i dodaj do poprzedniego elementu 
	
	/***** WYŚWIETLENIE ZAWARTOŚCI TABLICY ******/    
	printf("wylosowana tablica = [");
	for (int i=0; i<19; i++)
		 printf("%d, ", tab[i]);
	printf("%d]\n", tab[19]);


    /***** Tutaj umieść rozwiązanie zadania ******/
    maximum  = tab[19];
    minimum = tab[0];    
    mean = find_mean(tab, 20);

    printf("Maksymalny element na pozycji %d ma wartosc %d.\n", 20 , maximum);
    printf("Minimalny element na pozycji %d ma wartosc %d.\n", 1, minimum);
    printf("Srednia wartosci tablicy wynosi: %d.\n", mean);

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

// Zadanie różni się od poprzedniego z ostatnich zajęć tym, że mieliśmy listę nieporządkowaną.
// Więc żeby odnaleźć maximum i minimum musieliśmy najpierw odnaleźć pozycję na której znajduje się dana wartość.