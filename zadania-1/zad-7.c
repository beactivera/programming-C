#include <stdio.h>
int main()
{
  printf("Podaj pierwsza liczbe ");
  int a;
  scanf("%i", &a);
  printf("Podaj druga liczbe ");
  int b;
  scanf("%i", &b);
  int il, sum, roz;
  il = a*b;
  sum = a+b;
  roz = a-b;
  printf("Iloczyn wynosi %i \n" , il);
  printf("Suma wynosi %i \n", sum);
  printf("roznica wynosi %i \n", roz);

  return 0;
}