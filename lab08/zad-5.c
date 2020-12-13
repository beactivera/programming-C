#include <stdio.h>

int main(){

    int n;
    printf("podaj dlugosc tablicy: ");
    scanf("%d", &n);

    int tab[n];

    for(int i=0; i<=n; i++){
        tab[i]=i+1;
    }

    printf("tab = [");
	for (int i=0; i<n-1; i++)
		 printf("%d, ", tab[i]);
	printf("%d]\n", tab[n-1]);

    
    int ostatnia;
    for( int i=0; i<=n; i++){
        ostatnia = tab[0];
        tab[i+1]=tab[i];
    }

    tab[0] = ostatnia;

    
    printf("tablica przesunieta o 1 = [");
	for (int i=0; i<n-1; i++)
		 printf("%d, ", tab[i]);
	printf("%d]\n", tab[n-1]);


    return 0;
}