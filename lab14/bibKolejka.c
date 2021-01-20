#include "bibKolejka.h"
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void init(TKolejka *kol)
{
   kol->pierwszy = NULL;
   kol->ostatni = NULL;
}

bool isEmpty(TKolejka* kol)
{
   return (kol->pierwszy==NULL);
}

bool enqueue(TKolejka* kol, int x, int y)
{
   TElemKol* nowy = malloc(sizeof(TElemKol));
   if (nowy == NULL)
      return false;
   nowy->point.x = x;
   nowy->point.y = y;
   nowy->nast = NULL;
   if (kol->pierwszy == NULL)
   {
      kol->pierwszy = nowy;
      kol->ostatni = nowy;
   } else
   {
      kol->ostatni->nast = nowy;
      kol->ostatni = nowy;
   }
   return true;
}

Point dequeue(TKolejka* kol)
{
   if (isEmpty(kol))
   {
       printf("Kolejka jest pusta");
       Point empty_ret = {-1, -1};
       return empty_ret;
   }
   TElemKol* usun = kol->pierwszy;
   kol->pierwszy = kol->pierwszy->nast;
   Point retval = usun->point;
   free(usun);
   return retval;
}

void show(TKolejka* kol)
{
   TElemKol* elem = kol->pierwszy;
   printf("Zawartosc kolejki: ");
   while (elem!=NULL)
   {
      printf("x:%d,y:%d ", elem->point.x, elem->point.y);
      elem = elem->nast;
   }
   printf("\n");
}