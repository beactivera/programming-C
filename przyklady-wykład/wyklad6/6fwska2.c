#include<stdio.h>
#include<stdbool.h>
 
bool wczytaj(int*);
 
int main()
{
   int i;
   while (wczytaj(&i))
   {
       printf("<<<< Wczytalem %d >>>>\n",i);
   }
   return 0;
}
 
bool wczytaj(int* n)
{
    do
    {
        printf("Podaj dodatnia liczbe lub -1 aby zakonczyc: ");
        scanf("%d", n);
        if (*n==-1) 
            return false;
        if (*n<0)
            printf("Niepoprawna liczba\n");        
    } while (*n<0);
    return true;
}