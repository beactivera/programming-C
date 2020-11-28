#include<stdio.h>
 
int main()
{
    int lp = 5; // liczba partii
    int glosy[5]   = {155, 308, 156, 14, 12}; // glosy[i] - liczba glosow na partie i
    int lm[]       = {0, 0, 0, 0, 0};         // liczba mandatow przydzielona partii
    int dzielnik[] = {1, 1, 1, 1, 1};         // dzielniki dla partii
    int it = 7; // ogolna liczba mandatow do rozdzielenia
    while (it--)
    {
        int max=0;
        for (int i=1; i<lp; i++)
            if (1.0*glosy[i]/dzielnik[i] > 1.0*glosy[max]/dzielnik[max])
                max = i;
        lm[max]++;
        dzielnik[max]++;
    }
    for (int partia=0; partia<lp; partia++)
        printf("Partia %d uzyskala %d mandatow\n", partia, lm[partia]);
    return 0;
}
 