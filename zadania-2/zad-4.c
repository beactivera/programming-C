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
    
    printf("Podaj parametr c: ");
    double c;
    scanf("%lf", &c);
    
    double delta = pow(b, 2)-4.0*a*c;
    if (delta == 0) {
        double x_0 = -1.0*b/(2.0*a);
        printf("x_0: %lf", x_0);
    }
    else {
            double x_1 = (-b-sqrt(delta))/(2.0*a);
            double x_2 = (-b+sqrt(delta))/(2.0*a);
            printf("x_1: %.4lf, x_2: %.4lf", x_1, x_2);
        }

    return 0;
}