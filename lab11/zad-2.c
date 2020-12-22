#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {


int n, m;
int licznik=0;

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

        if(tab[i][j]!=0){
            licznik++;
        }
      }
      printf("\n");
  }

  printf("Liczba elementów niezerowych: %d\n", licznik);

    return 0;
}