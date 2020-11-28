#include<stdio.h>
 
struct TDaneStudenta
{
    char *imie;
    char *nazwisko;
    unsigned int rok_studiow;
    unsigned int nr_indeksu;
};
 
void pokazDaneStudenta(struct TDaneStudenta);
void drukujEtykiete(struct TDaneStudenta);
 
int main()
{
    struct TDaneStudenta s1 = {"Ala", "Kot", 2, 109222};
    
    pokazDaneStudenta(s1);
    drukujEtykiete(s1);
    return 0;
}
 
void pokazDaneStudenta(struct TDaneStudenta a)
{
    printf("%s %s %i\n", a.imie, a.nazwisko, a.rok_studiow);
}
 
void drukujEtykiete(struct TDaneStudenta a) 
{
    printf("\nImie: %s\nNazwisko: %s\nRok studiow: %i\n", a.imie, a.nazwisko, a.rok_studiow);
}