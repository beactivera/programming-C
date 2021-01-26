#include<stdio.h>
#include"5stos.h"

int main()
{
    TStosPudelek *stos = NULL;
    stos = push(stos, (TPudelko){10, 10, 10, 1});
    stos = push(stos, (TPudelko){20, 20, 20, 2});
    stos = push(stos, (TPudelko){30, 30, 30, 3});

    while (!isEmpty(stos))
    {
        TPudelko p = top(stos);
        stos = pop(stos);
        printf("Zdjeto ze stosu pudelko o wyiarach (%d, %d, %d) i masie %f\n", p.wys, p.sze, p.dlu, p.masa); 
    }
    return 0;
}

