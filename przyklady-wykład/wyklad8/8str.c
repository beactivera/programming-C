#include<stdio.h>
#include<stdbool.h>
 
#define MAXGR 100
 
typedef struct 
{
    char imie[20];
    char nazwisko[20];
    unsigned int rok_studiow;
    unsigned int nr_indeksu;
} TDaneStudenta;
 
void wczytajDaneStudenta(TDaneStudenta*);
 
void promujStudenta(TDaneStudenta*, int lstud);
void promocja(TDaneStudenta*);
 
void pokazDaneGrupy(TDaneStudenta*, int lstud);
void pokazDaneStudenta(TDaneStudenta);
 
int main()
{
    int lstud = 0;
    TDaneStudenta grupa[MAXGR];
    int opcja;
    do
    {
        printf("Wybierz opcje:\n1- dodaj studenta\n2- promuj studenta\n3- wyswietl dane grupy\n4- wyjscie\n");
        scanf("%d",&opcja);
        switch (opcja)
        {
            case 1:
                if (lstud < MAXGR)
                {
                    wczytajDaneStudenta(&grupa[lstud]);
                    lstud++;
                } else
                    printf("Brak miejsc w grupie\n");
                break;
            case 2:
                promujStudenta(grupa, lstud);
                break;                
            case 3:
                pokazDaneGrupy(grupa, lstud);
                break;                
        }
    } while (opcja!=4);
    return 0;
}
 
 
 
void wczytajDaneStudenta(TDaneStudenta *student)
{
    printf("Podaj imie: ");
    scanf("%19s", student->imie);    
    printf("Podaj nazwisko: ");
    scanf("%19s", student->nazwisko);    
    //nie ma zabezpieczenia przed zdublowaniem numeru indeksu
    printf("Podaj numer indeksu: ");
    scanf("%d", &student->nr_indeksu);    
    student->rok_studiow = 1;
}
 
 
void promujStudenta(TDaneStudenta *grupa, int lstud)
{
    int nind;
    printf("Podaj numer indeksu: ");
    scanf("%i",&nind);
    
    bool jest = false;
    //promowani wszyscy o takim samym numerze indeksu
    for (int i=0; i<lstud; i++)
        if ((*(grupa+i)).nr_indeksu==nind) 
        {
            promocja(grupa+i);        
            jest = true;
        }
    if (!jest)
        printf("Brak studenta o podanym numerze indeksu!!!\n");
}
 
void promocja(TDaneStudenta *a) 
{
    a->rok_studiow++;
    printf("Promocja studenta %s %s (indeks: %i) na %i rok\n", a->imie, a->nazwisko, a->nr_indeksu, a->rok_studiow);
}
 
void pokazDaneGrupy(TDaneStudenta *grupa, int lstud)
{
    printf("--------------------------------------------------------\n");
    printf("        Dane grupy\n");
    printf("Liczba studentow: %d\n", lstud);
    printf("Lista studentow: \n");    
    printf("%20s|%20s|%10s|%3s\n","Imie", "Nazwisko", "Indeks", "Rok");    
    for (int i=0; i<lstud; i++)
        pokazDaneStudenta(grupa[i]);
    printf("--------------------------------------------------------\n");
}
 
void pokazDaneStudenta(TDaneStudenta a)
{
    printf("%20s|%20s|%10i|%3i\n", a.imie, a.nazwisko, a.nr_indeksu, a.rok_studiow);
}