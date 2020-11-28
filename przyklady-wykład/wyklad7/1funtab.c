#include<stdio.h>
 
int tab_sum(int tab[], int);
 
int main()
{
    int tab[] = {2, 3, 4, 5, 6};        
    printf("%d\n", tab_sum(tab, 5));
    printf("%d\n", tab_sum(tab+1, 2));    
    return 0;
}
 
int tab_sum(int tab[], int n)
{	
    int suma = 0;
    for (int i=0; i<n; i++)
        suma += tab[i];
    return suma;
}