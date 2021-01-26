#include<stdio.h>
#include<stdlib.h>

typedef struct 
{
    int sze;
    int wys;
    int dlu;
    float masa;
} TPudelko;

int main()
{
    TPudelko *p;
    p=malloc(sizeof(TPudelko));
    if (p!=NULL)
    {
        (*p).sze = 11;
        (*p).wys  = 12;
        p->dlu = 13;
        p->masa = 2.1;
        
        printf("Pudelko jest zapisane pod adresem = %p\n", p);  
        printf("Pudelko ma wymiary %d na %d na %d i mase %f\n\n\n", p->sze, p->wys, p->dlu, p->masa);  
        
        int *i = (int*)p;
        printf("Wartosc i to adres = %p\n", i);          
        printf("Wartosc w miejscu wskazywanym przez i = %d\n", *i);
        printf("Wartosc w miejscu wskazywanym przez i+1 = %d\n", *(i+1));               
        free(p);
    }
    return 0;
}
