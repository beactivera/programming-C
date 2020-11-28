#include<stdio.h>
 
int main()
{
    int kt=0; // licznik
    printf("Program wypisuje wszystkie trzycyfrowe liczby, ktore maja rozne cyfry\n");
    int cs;   // cyfra setek
    for (cs=1; cs<10; cs++)
    {
        int cd;   // cyfra dziesiatek
        for (cd=0; cd<10; cd++)
        {
            if (cs!=cd)
            {
                int cj;   // cyfra jednosci
                for (cj=0; cj<10; cj++)
                {
                    if (cj!=cd && cj!=cs)
                    {
                        printf("%d - %d%d%d\n", ++kt, cs, cd, cj);
                    }
                }
            }
        }
    }
    return 0;
}