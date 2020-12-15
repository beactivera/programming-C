#include <stdio.h>

int iloscCyfr(long long n);


int main()
{
    long long n;
    int licznik;
    
    printf("Podaj liczbe: ");
    scanf("%lld", &n);
    
    licznik = iloscCyfr(n);
    
    printf("Ilosc cyfr liczby %lld wynosi %d\n", n, licznik);
    
    return 0;
}

int iloscCyfr(long long n)
{
    if(n== 0){
        return 0;
    }
    
    return 1 + iloscCyfr(n/10);
        
}