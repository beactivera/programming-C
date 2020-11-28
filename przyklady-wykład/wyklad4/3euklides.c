#include<stdio.h>
 
int main()
{
    int a, b;
    printf("Program oblicza najwiekszy wspolny dzielnik dodatnich liczb naturalnych a i b\n");
    printf("Podaj liczbe a: ");
    scanf("%d", &a);
    printf("Podaj liczbe b: ");
    scanf("%d", &b);
    while (a!=b)
    {
        if (a>b)
            a = a-b;
        else
            b = b-a;
    }
    printf("%d\n", a);
    return 0;
}