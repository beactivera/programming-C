#include<stdio.h>
 
void pokaz(int*, int*);
 
int main()
{
    int a[] = {6, 5, 3, 14, 5};
    pokaz(a,a+5);
    pokaz(a+1,a+4);
    return 0;
}
 
void pokaz(int* pocz, int* kon)
{
    for (int* pt = pocz; pt != kon; pt++)
        printf("%d ",*pt);        
    printf("\n");        
}