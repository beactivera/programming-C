#include<time.h>
#include<stdlib.h>
#include<stdio.h>

int main()
{
    int n, pozycja = -1,m,l,r, mniej=0, wiecej=0, licz_mniej=0, licz_wiecej=0, licz_rowne=0;

	/***** LOSOWANIE TABLICY ******/
	srand( time( NULL ) );      // inicjalizacja generatora liczb pseudolosowych
	int tab[20];                // deklaracja tablicy
	tab[0] = rand() % 5;        // 'wylosuj' liczbe z zakresu 0...4
	for (int i=1; i<20; i++)    // dla kazdego elementu
		 tab[i] = tab[i-1] + rand() % 3;   // 'wylosuj' liczbe z zakresu 0...2 i dodaj do poprzedniego elementu
	
	/***** Tutaj umieść rozwiązanie zadania ******/    
	printf("Podaj szukaną liczbę: ");
    scanf("%d", &n);

    // indeksy srodka,lewej i prawej strony naszej tablicy
    m = 10;
    l = 0;
    r = 19;

    while(l<=r){
        
        if(n == tab[m]){
           licz_rowne++;
           if(n == tab[m+1]) {
               licz_rowne++;
           }
           else{
               wiecej++;
           }

           if(n == tab[m-1]){
               licz_rowne++;
           }
           else{
                mniej++;
           }
        }
        // szukana jest z lewej lub prawej stronie tablicy
        if (n > tab[m]){
            l = m + 1;
        }
        else{
            r = m-1; 
        }
        
        // zmiana naszego wewnetrznego srodka (ponowne podzielenie tablicy na dwa) liczac pozycje od lewej strony
        m = l +((r-l))/2;
    }

        licz_mniej= 19 - (wiecej + licz_rowne);
        licz_wiecej = 19 - (mniej + licz_rowne);
    
        printf("Liczba ta występuje %d razy, jest %d liczb wiekszych od niej i %d liczb mniejszych od niej.\n",licz_rowne, licz_wiecej,licz_mniej);

	
	/***** WYŚWIETLENIE ZAWARTOŚCI TABLICY ******/    
	printf("tab = [");
	for (int i=0; i<19; i++)
		 printf("%d, ", tab[i]);
	printf("%d]\n", tab[19]);
}