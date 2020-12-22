#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {


int n, m;

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

      }
      printf("\n");
  }

    return 0;
}