#include<stdio.h>

double potegabin(double a, unsigned int n);
double potega(double a, unsigned int n);

int main()
{
    printf("%e\n", potegabin(0.9999,100));
    printf("%e\n", potega(0.9999,100));    
    return 0;
}

double potegabin(double a, unsigned int n) 
{
    if (n==0) 
        return 1.0;
    if (n%2==0) 
        return potegabin(a*a, n/2);
    return a * potegabin(a, n-1);
}

double potega(double a, unsigned int n) 
{
    if (n == 0) 
        return 1.0;
    else 
        return a * potega(a, n-1);
}
