#include<stdio.h>
#include<math.h>
 
int main()
{
    double a, b, c, delta;
    printf("Program znajduje miejsca zerowe funkcji kwadratowej f(x)=ax^2+bx+c\n");
    printf("Podaj parametr a!=0: ");
    scanf("%lf", &a);
    printf("Podaj parametr b: ");
    scanf("%lf", &b);
    printf("Podaj parametr c: ");
    scanf("%lf", &c);
    delta = b*b-4*a*c;
    printf("Delta = %lf\n", delta);
    if (delta>0)
    {
        printf("x1 = %lf\n", (-b-sqrt(delta))/(2*a));
        printf("x2 = %lf\n", (-b+sqrt(delta))/(2*a));
    } 
    else if (delta==0)
        printf("Jedno miejsce zerowe x0 = %lf\n", -b/(2*a));
    else
        printf("Brak miejsc zerowych\n");
    
    return 0;
}