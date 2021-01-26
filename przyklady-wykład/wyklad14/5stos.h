#ifndef _STOS_H_
#define _STOS_H_

#include<stdbool.h>

typedef struct 
{
    int sze;
    int wys;
    int dlu;
    float masa;
} TPudelko;

typedef struct stospudelek
{
    TPudelko pudelko;
    struct stospudelek* nast;
} TStosPudelek;

TStosPudelek* pop(TStosPudelek*);
TStosPudelek* push(TStosPudelek*, TPudelko pud);
bool isEmpty(TStosPudelek*);
TPudelko top(TStosPudelek*);

#endif
