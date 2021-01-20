#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct
{
    int x;
    int y;
} Point;

typedef struct elemkol
{
   Point point;
   struct elemkol* nast;
} TElemKol;

typedef struct
{
   TElemKol* pierwszy;
   TElemKol* ostatni;
} TKolejka;

void init(TKolejka*);
bool isEmpty(TKolejka*);
bool enqueue(TKolejka*, int, int);
Point dequeue(TKolejka*);
void show(TKolejka*);

int main()
{
   TKolejka kol;
   Point dequeue_container;
   init(&kol);

   printf("Dodaje do kolejki 10, 10\n");
   if (!enqueue(&kol, 10, 10)) 
      return 1;

   printf("Dodaje do kolejki 15, 10\n");
   if (!enqueue(&kol, 15, 10)) 
      return 1;

   printf("Dodaje do kolejki 20, 15\n");
   if (!enqueue(&kol, 20, 15)) 
      return 1;
   
   show(&kol);

   dequeue_container = dequeue(&kol);
   printf("Zdejmuje z kolejki: x:%d,y:%d\n", dequeue_container.x, dequeue_container.y);

   printf("Dodaje do kolejki 15, 100\n");
   if (!enqueue(&kol, 15, 100)) 
      return 1;

   while (!isEmpty(&kol))
   {
      dequeue_container = dequeue(&kol);
      printf("Zdejmuje z kolejki: x:%d,y:%d\n", dequeue_container.x, dequeue_container.y);
   }

   return 0;
}

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