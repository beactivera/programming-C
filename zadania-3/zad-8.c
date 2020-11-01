#include <stdio.h>
#include <math.h>

int main()
{
    int base, power;
    double result = 1;

    printf("Podaj liczbe rzeczywista: ");
    scanf("%d",&base);

    printf("Podaj liczbe naturalna: ");
    scanf("%d",&power);

    while(power>0)
    {
        result *= base;
        power --;
        
    }
    printf("Podana liczba rzeczywista podniesiona do potegi podanej liczby naturalnej daje nam liczbe %.f.\n", result);

    return 0;
}