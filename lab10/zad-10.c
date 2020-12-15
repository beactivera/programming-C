#include<stdio.h>

int NWD(int a, int b);

int main()
{
    int a, b;
    
    printf("Podaj a: ");
    scanf("%d", &a);
    printf("Podaj b: ");
    scanf("%d", &b);
    
    printf("NWD(%d,%d) wynosi %d\n", a,b,NWD(a,b));
     
    return 0;
}

int NWD(int a, int b)
{
    int c;
    while (b != 0)
    {
          c = a % b;
          a = b;
          b = c;

    }
    return a;
}
