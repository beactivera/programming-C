#include <stdio.h>
#include <math.h>
int main()
{
  printf("Podaj dodatnia liczbe zmiennoprzecinkowa: ");
  float a;
  scanf("%f", &a);

  float kwadrat, szescian, pierwiastek;

  kwadrat = pow(a,2);
  szescian = pow(a,3);
  pierwiastek = sqrt(a);

  printf("Kwadrat tej liczby wynosi %f\n  szescian tej liczby wynosi %f\n  pierwiastek tej liczby wynosi %f\n ", kwadrat, szescian, pierwiastek);

  return 0;
}