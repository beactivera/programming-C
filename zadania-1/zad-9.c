#include <stdio.h>
#include <math.h>
int main()
{
  printf("Podaj liczbe naturalna: ");
  int a;
  scanf("%i", &a);

  printf("Reszta z dzielenia przez 2: %i\n", a % 2);
  printf("Reszta z dzielenia przez 3: %i\n", a % 3);
  printf("Reszta z dzielenia przez 5: %i\n", a % 5);
  printf("Reszta z dzielenia przez 7: %i\n", a % 7);

  return 0;
}