#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct elemkol
{
   int val;
   struct elemkol* nast;
} TElemKol;

typedef struct
{
   TElemKol* pierwszy;
   TElemKol* ostatni;
} TKolejka;

void init(TKolejka*);
bool isEmpty(TKolejka*);
bool enqueue(TKolejka*, int);
int dequeue(TKolejka*);
void show(TKolejka*);

int main()
{
   TKolejka kol;
   init(&kol);

   printf("Dodaje do kolejki 10\n");
   if (!enqueue(&kol, 10)) 
      return 1;

   printf("Dodaje do kolejki 15\n");
   if (!enqueue(&kol, 15)) 
      return 1;

   printf("Dodaje do kolejki 20\n");
   if (!enqueue(&kol, 20)) 
      return 1;

   printf("Zdejmuje z kolejki: %d\n", dequeue(&kol));

   printf("Dodaje do kolejki 15\n");
   if (!enqueue(&kol, 15)) 
      return 1;

   while (!isEmpty(&kol))
   {
      printf("Zdejmuje z kolejki: %d\n", dequeue(&kol));
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

bool enqueue(TKolejka* kol, int val)
{
   TElemKol* nowy = malloc(sizeof(TElemKol));
   if (nowy == NULL)
      return false;
   nowy->val = val;
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

int dequeue(TKolejka* kol)
{
   if (isEmpty(kol))
   {
       printf("Kolejka jest pusta");
       return -1;
   }
   TElemKol* usun = kol->pierwszy;
   kol->pierwszy = kol->pierwszy->nast;
   int retval = usun->val;
   free(usun);
   return retval;
}

void show(TKolejka* kol)
{
   TElemKol* elem = kol->pierwszy;
   printf("Zawartosc kolejki: ");
   while (elem!=NULL)
   {
      printf("%d ", elem->val);
      elem = elem->nast;
   }
   printf("\n");
}
