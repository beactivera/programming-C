#include<stdio.h>
 
int main() 
{
    int tab[3] = {1,2,3};
    *tab = 4;
    printf("%d %d %d\n", *tab, *(tab+1), *(tab+2));    
    return 0;
}