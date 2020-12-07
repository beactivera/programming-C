#include <stdio.h>

int main() {

  int cyfra;

  printf("Podaj liczbe calkowita: ");
  scanf("%d",&cyfra);

  if (cyfra >= 0 && cyfra < 10) 
  {
    printf("Podana liczba jest cyfra.\n");

      switch(cyfra) {
        case 0 : printf("Podana cyfra jest zero."); break;
        case 1 : printf("Podana cyfra jest jeden."); break;
        case 2 : printf("Podana cyfra jest dwa."); break;
        case 3 : printf("Podana cyfra jest trzy."); break;
        case 4 : printf("Podana cyfra jest cztery."); break;
        case 5 : printf("Podana cyfra jest piec."); break; 
        case 6 : printf("Podana cyfra jest sześc."); break; 
        case 7 : printf("Podana cyfra jest siedem."); break;
        case 8 : printf("Podana cyfra jest osiem.");break;
        case 9 : printf("Podana cyfra jest dziewiec."); break;
      }

  } 
  else 
  {
      printf("Podana liczba nie jest cyfra.");
  }

  return 0;
}