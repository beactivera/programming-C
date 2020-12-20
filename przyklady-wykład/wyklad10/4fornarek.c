#include<stdio.h>

int tab1[10];
int tab2[10];      

void f(int i);
void pokaz(int*, int);

int main()
{
   int i;
   for (i=0; i<10; i++)
      tab1[i]=i;
   pokaz(tab1, 10);
      
   f(0);
   pokaz(tab2, 10);
   return 0;
}

void f(int i)
{
   if (i<10)
   {
      tab2[i]=i;
      f(i+1);
   }
}

void pokaz(int* tab, int ile)
{
   int i;
   for (i=0; i<ile; i++)
      printf("%d ", tab[i]);
   printf("\n");
}