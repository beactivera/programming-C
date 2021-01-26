#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include"5stos.h"

bool isEmpty(TStosPudelek *stos)
{
    return stos==NULL;
}

TStosPudelek* pop(TStosPudelek *stos)
{
    if (isEmpty(stos))
    {
        printf("Stos jest pusty, nie mozna wykonac operacji pop\n");
        return NULL;
    }
    TStosPudelek *nowyStos = stos->nast;
    free(stos);
    return nowyStos;
}

TStosPudelek* push(TStosPudelek *stos, TPudelko pud)
{
    TStosPudelek *nowyEl = malloc(sizeof(TStosPudelek));
    if (nowyEl==NULL)
    {
        printf("Nie udalo sie dodac elementu do stosu\n");
        return stos;
    }
    nowyEl->pudelko = pud;
    nowyEl->nast = stos;
    return nowyEl;
}

TPudelko top(TStosPudelek *stos)
{
    if (isEmpty(stos))
    {
        printf("Stos jest pusty, nie mozna wykonac operacji top\n");
        return (TPudelko){0,0,0,0};
    }
    return stos->pudelko;
}
