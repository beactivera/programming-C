#include <stdio.h>

int main()
{
  printf("Podaj pierwsza liczbe typu double: ");
  double a;
  scanf("%lf", &a);

  printf("Podaj druga liczbe typu double: ");
  double b;
  scanf("%lf", &b);
   
  printf("Podaj trzecia liczbe typu double: ");
  double c;
  scanf("%lf", &c);

    if(a>=b){
        double zamiana;
        zamiana = a;
        a=b;
        b=zamiana;
    }
    if(a>=c){
        double zamiana;
        zamiana = a;
        a=c;
        c=zamiana;
    }
    if(b>=c){
        double zamiana;
        zamiana = b;
        b=c;
        c=zamiana;
    }

    printf("%.2lf, %.2lf, %.2lf", a, b, c);

  return 0;
}