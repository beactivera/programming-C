#include<stdio.h>
 
typedef struct 
{
    char imie[40];
    char nazwisko[40];
    unsigned int rok_studiow;
    unsigned int nr_indeksu;
} TDaneStudenta;
 
void pokazDaneStudenta(TDaneStudenta);
void drukujEtykiete(TDaneStudenta);
void promocja(TDaneStudenta); //błąd
 
int main()
{
    TDaneStudenta s1 = {"Ala", "Kot", 2, 109222};
    pokazDaneStudenta(s1);
    promocja(s1);
    pokazDaneStudenta(s1);    
    return 0;
}
 
void pokazDaneStudenta(TDaneStudenta a)
{
    printf("%s %s %i\n", a.imie, a.nazwisko, a.rok_studiow);
}
 
void drukujEtykiete(TDaneStudenta a) 
{
    printf("\nImie: %s\nNazwisko: %s\nRok studiow: %i\n", a.imie, a.nazwisko, a.rok_studiow);
}
 
void promocja(TDaneStudenta a) //błąd
{
    a.rok_studiow++;
    printf("Promocja studenta (indeks: %i) na %i rok\n", a.nr_indeksu, a.rok_studiow);
}