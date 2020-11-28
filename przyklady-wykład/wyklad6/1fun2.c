#include<stdio.h>
 
int npok1(int, int);
int npok2(int, int);
 
int main()
{
    int n=50;
    int k=6;    
    printf("%d\n", npok1(n,k));
    printf("%d\n", npok2(n,k));    
    return 0;
}
 
int npok1(int n,int k)
{
    if (k>n-k) 
    {
        k=n-k;
    }
    
    int licznik = 1;
    int mianownik = 1;
    for (int i=0; i<k; i++)
    {
        licznik *= n-i;
        mianownik *= i+1;
    }
    return licznik/mianownik;
}
 
int npok2(int n,int k)
{
    if (k>n-k) 
    {
        k=n-k;
    }
 
    int wynik=1;
    for (int i=0; i<k; i++)
        wynik = wynik * (n-i) / (i+1);
 
    return wynik;
}