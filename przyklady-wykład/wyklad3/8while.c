#include<stdio.h>
 
int main()
{
    printf("Podaj liczbe: ");
    int d, zm = 0;
    scanf("%d", &d);
    while (d != 0)
    {
        d = d / 10;
        zm++;
    }
    
    if (zm==0)
        printf("Podana liczba to 0\n");
    else
        printf("Podana liczba ma %d cyfry\n", zm);
 
    return 0;
}