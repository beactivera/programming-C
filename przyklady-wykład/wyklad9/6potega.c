#include<stdio.h>

double potega(double a, unsigned int n);

int main()
{
    printf("%e\n", potega(0.3, 10));
    return 0;
}

double potega(double a, unsigned int n) 
{
    if (n == 0) 
        return 1.0;
    else 
        return a * potega(a, n-1);
}
