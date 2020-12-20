#include<stdio.h>

int f(int k, int i);

int main()
{
    int n=32;    
    int wynik = f(n+1, 2);
    printf("%d\n", wynik);        
    return 0;
}

int f(int k, int i) 
{
    if (i==k)
        return k;
    if (k%i==0)
        return f(k+1, 2);
    return f(k, i+1);
}
