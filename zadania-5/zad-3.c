#include <stdio.h>
#include<stdlib.h>

int fibonacci(int n);

int main()
{
    int n;
    
    printf("Podaj liczbe naturalna mniejsza od 20: ");
    scanf("%d", &n);
    
    fibonacci(n);
    
    return 0;
}

int fibonacci(int n)
{    
    long long a = 0, b = 1;
  
    printf("Fibo = [ %lld ", a);
    for(int i=0;i<n-1;i++)
    {
            printf("%lld ", b);
            b += a; //pod zmienną b przypisujemy wyraz następny czyli a+b
            a = b-a; //pod zmienną a przypisujemy wartość zmiennej b
    }   
    printf("]");  
}