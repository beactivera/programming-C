#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void selection_sort(int n, int tab[]);
void swap(int* a, int* b);
void printArray(int tab[], int n);


int main()
{
    /***** LOSOWANIE TABLICY ******/
	srand( time( NULL ) );      // inicjalizacja generatora liczb pseudolosowych
	int tab[20];                // deklaracja tablicy
    for (int i=0; i<20; i++)    // dla kazdego elementu
		 tab[i] = rand() % 20;   // 'wylosuj' liczbe z zakresu 0..19

    int size = sizeof(tab) / sizeof(tab[0]);

    printf("tablica wylosowana: ");
    printArray(tab, size);
  
   selection_sort(size, tab);

   printf("tablica posortowana: ");
   printArray(tab, size);

   return 0;
}

void selection_sort(int n, int tab[])
{
   int i, j, k;
   for(i=0; i<n; i++) {
      k=i;
      for(j=i+1; j<n; j++) if(tab[j]<tab[k]) k=j;
      swap(&tab[k], &tab[i]);
   }
}

void swap(int* a, int* b) 
{ 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
} 

void printArray(int tab[], int n)  
{    
    for (int i = 0; i < n; i++)  
        printf("%d ", tab[i]);
    printf("\n"); 
}  