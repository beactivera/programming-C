#include<stdio.h>
#include<stdlib.h> /* abs */
#include<limits.h>

void wyswietlrep2(int i);

int main()
{
    int i;
    for (i=0; i<16; i++)
        wyswietlrep2(i);
/*
    wyswietlrep2(-13);        
    i = INT_MAX;
    wyswietlrep2(i);
    i++;
    wyswietlrep2(i);
*/    
    return 0;
}

void wyswietlrep2(int i)
{
    printf("%d = ",i);    
    for (int k=31; k>=0; k--)
    {
        int bit = abs(i >> k)%2;
        printf("%d",bit);
    }
    printf("\n");
}
