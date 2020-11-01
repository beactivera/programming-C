#include<stdio.h>
#include<math.h>

int main()
{
    double x, pierw;
    printf("Podaj liczbe: ");
    scanf("%lf",&x);

    while(x>0)
    {
        pierw = sqrt(x);
    }

    printf("Pierwiastek z liczyb wynosi: %.2lf", pierw);

    return 0;
}