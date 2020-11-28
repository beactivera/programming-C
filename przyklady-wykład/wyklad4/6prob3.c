#include<stdio.h>
 
int main()
{
    int n;
    printf("Program wypisuje wszystkie trzycyfrowe liczby, ktorych suma cyfr wynosi n.\nPodaj n: ");
    scanf("%d", &n);
    int cs;  // cyfra setek
    for (cs=1; cs<10; cs++)
    {
        int cd;  // cyfra dziesiatek
        for (cd=0; cd<10; cd++)
        {
            int cj;  // cyfra jednosci
            for (cj=0; cj<10; cj++)
            {
                if (cj+cd+cs==n)
                {
                    printf("%d%d%d\n", cs, cd, cj);
                }
            }
        }
    }
    return 0;
}