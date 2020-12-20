#include<stdio.h>
#include<stdbool.h>

typedef union
{
    int sztuki;
    float masa;
} TIlosc;

typedef enum 
{
    SZT, 
    KG
} TJednostka;

typedef struct
{
    char *nazwa;
    TIlosc ilosc;
    TJednostka jedn;    
} TPozycjaFaktury;

void pokazPozycje(TPozycjaFaktury*);

int main()
{
    TPozycjaFaktury pf1 = {"Rowery", .ilosc.sztuki = 6, SZT};  
    TPozycjaFaktury pf2 = {"Jablka", .ilosc.masa = 3.34, KG};
    pokazPozycje(&pf1);
    pokazPozycje(&pf2);    
    return 0;
}

void pokazPozycje(TPozycjaFaktury *pf)
{
    printf("Pozycja przechowuje ");
    if (pf->jedn == KG)
        printf("%s o masie %fkg\n",pf->nazwa, pf->ilosc.masa);        
    else if (pf->jedn == SZT)
        printf("%s w liczbie %i sztuk\n",pf->nazwa, pf->ilosc.sztuki);        
}
