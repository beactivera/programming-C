#include <stdio.h>
#include <math.h>
int main()
{
  printf("Podaj kurs waluty: ");
  float kurs;
  scanf("%f", &kurs);

  printf("Podaj ilosc posiadanych pieniedzyw tej walucie: ");
  float x;
  scanf("%f", &x);

  float ilosc_zlotych;

  ilosc_zlotych = kurs*x; 

  printf("----------------------------------------------------------\n");
  printf("| Kwota w walucie  |       Kurs       |    Kwota w zl    |\n");
  printf("----------------------------------------------------------\n");
  printf("|%18.1f|%18.1f|%18.1f|\n", x, kurs, ilosc_zlotych);
  printf("----------------------------------------------------------\n");

  return 0;
}