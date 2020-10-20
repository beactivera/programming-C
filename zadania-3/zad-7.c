#include <stdio.h>
#include <math.h>

int main()
 {
    unsigned n;
    double silnia;

    silnia = 1;

    printf("Podaj liczbe naturalna: ");
    scanf("%d",&n);

    for( int i=n; i>1; i--)
    {
        silnia *= i;
        // printf("%lf", silnia);
    }

    printf("%d silnia wynosi: %.2lf", n, silnia);

  printf("\n");  
  return 0;
}