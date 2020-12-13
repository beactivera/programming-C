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

    int power1 = power;

    while(power>0)
    {
        result *= base;
        power --;
        
    }
    printf("%d do potegi %d daje nam liczbe %.f.\n", base, power1, result);

    return 0;
}