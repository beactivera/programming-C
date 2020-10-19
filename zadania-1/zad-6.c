#include <stdio.h>
#include <limits.h>

int main()
{
printf (" Podaj piersza liczbe naturalna: ");
int n1;
scanf ("%i", &n1);
// n1 = -n1;
// printf (" Liczba przeciwna  to: %i\n", n1);

printf (" Podaj druga liczbe naturalna: ");
int n2;
scanf ("%i", &n2);
// n2 = -n2;
// printf (" Liczba przeciwna  to: %i\n", n2);

printf (" Podaj trzecia liczbe naturalna: ");
int n3;
scanf ("%i", &n3);

printf("Podane liczby w odwrotnej kolejnosci: %i, %i, %i ",n3, n2, n1 );
return 0;

}