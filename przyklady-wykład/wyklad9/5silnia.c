#include<stdio.h>

unsigned int silnia(unsigned int n);

int main()
{
    printf("%i\n", silnia(10));
    return 0;
}

unsigned int silnia(unsigned int n)
{
    if (n==0) 
        return 1;
    else
        return silnia(n-1)*n;
}
