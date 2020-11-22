#include<time.h>
#include<stdlib.h>
#include<stdio.h>

int main()
{
    /***** LOSOWANIE TABLICY ******/
    srand( time( NULL ) );      // inicjalizacja generatora liczb pseudolosowych
    int tab[20];                // deklaracja tablicy
    tab[0] = rand() % 5;        // 'wylosuj' liczbe z zakresu 0...4
    for (int i=1; i<20; i++)    // dla kazdego elementu
         tab[i] = tab[i-1] + rand() % 3;   // 'wylosuj' liczbe z zakresu 0...2 i dodaj do poprzedniego elementu
    
    /***** Tutaj umieść rozwiązanie zadania ******/    
    int n;
    int m=10, l =0, r = 19;
    int licznik = 0, licz_rowne = 1, licz_mniej = 0, licz_wiecej = 0;
    int i,k;

    printf("Podaj szukana liczbe: ");
    scanf("%d", &n);
 
    while(l<=r){
     
        if(n==tab[m]){
            licznik++;
            k=m;
            i=m;
            while(tab[m]==tab[m+1]){
                licz_wiecej++;
                m++;
                licz_rowne++;
            }
            while(tab[i]==tab[i-1]){
                licz_mniej--;
                i--;
                licz_rowne++;
            }
           break;
        }
        if (n>tab[m]){

            l = m+1;

        }
        else{

            r = m-1;
        }
        
        m = l + ((r-l))/2;
    }

    if(licznik > 0){
        printf("Liczba znajduje sie w tablicy, liczb wiekszych jest: %d, mniejszych: %d, rownych: %d.\n",19 - k - licz_wiecej,k - licz_mniej,licz_rowne);
    }
    else{
        printf("Liczba NIE znajduje sie w tablicy.\n");
    }
    
    /***** WYŚWIETLENIE ZAWARTOŚCI TABLICY ******/    
    printf("tab = [");
    for (int i=0; i<19; i++)
         printf("%d, ", tab[i]);
    printf("%d]\n", tab[19]);

    return 0;
} 