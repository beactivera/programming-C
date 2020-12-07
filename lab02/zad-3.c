#include <stdio.h>
#include <math.h>

int main()
{
    printf("Podaj parametr a: ");
    double a;
    scanf("%lf", &a);
    
    printf("Podaj parametr b: ");
    double b;
    scanf("%lf", &b);
    
    double x_0 = -1.0*b/a; 

    printf("Miejsce zerowe: y=0, x=%.2lf", x_0);

    return 0;
}
