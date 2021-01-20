#include "bibKolejka.h"
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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