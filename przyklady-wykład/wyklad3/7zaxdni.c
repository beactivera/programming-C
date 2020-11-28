#include<stdio.h>
 
int main()
{
    unsigned int x, tmp;
    printf("Dzisiaj jest piątek.\nProgram oblicza jaki dzien tygodnia bedzie za x dni\n");
    printf("Podaj parametr x: ");
    scanf("%u", &x);
    tmp = x%7;
    switch (tmp)
    {
        case 0:
            printf("za %u dni bedzie piatek\n", x);
            break;
        case 1:
            printf("za %u dni bedzie sobota\n", x);
            break;
        case 2:
            printf("za %u dni bedzie niedziela\n", x);
            break;
        case 3:
            printf("za %u dni bedzie poniedzialek\n", x);
            break;
        case 4:
            printf("za %u dni bedzie wtorek\n", x);
            break;
        case 5:
            printf("za %u dni bedzie sroda\n", x);
            break;
        case 6:
            printf("za %u dni bedzie czwartek\n", x);
            break;
    }
    return 0;
}