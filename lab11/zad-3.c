#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {


int n, m, sumaWiersza[n], max=0, indeks=0;

printf("Podaj liczbe wierszy: ");
scanf("%d", &n);
printf("Podaj liczbe kolumn: ");
scanf("%d", &m);

int tab[n][m];
srand( time( NULL ) );

  for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){

        tab[i][j] = rand() % 4;
        printf("%d", tab[i][j]);
        int liczba = tab[i][j];
        sumaWiersza[i] += liczba;
      }
      printf("\n");
  }

  for(int k=0; k<n;k++){
      if(sumaWiersza[k]>max){
          max= sumaWiersza[k];
          indeks=k;
      }
  }

    printf("Wiersz o najwiekszej sumie elementów: %d\n", indeks+1);
    return 0;
}