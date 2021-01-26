#include<stdio.h>
#include<stdlib.h>

typedef union
{
   int valint;
   float valfl;
} TLiczba;

void wyswietlrep2(TLiczba l);

int main()
{
    for (int i=0; i<10; i++)
    {
        TLiczba a = { .valfl = i };
        wyswietlrep2(a);
    }    
/*
    TLiczba a = { .valfl = 0.1 };
    wyswietlrep2(a);
    
    a.valint = 1;
    wyswietlrep2(a);
    
    a.valfl = -13.14;
    wyswietlrep2(a);

    a.valfl = 0.27;
    wyswietlrep2(a);
*/
    return 0;
}

void wyswietlrep2(TLiczba l)
{
    int i = l.valint;
    printf("%e = ", l.valfl);    
    for (int k=31; k>=0; k--)
    {
        int bit = abs(i >> k)%2;
        printf("%d",bit);
    }
    printf("\n");
}
