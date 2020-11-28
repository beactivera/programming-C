#include<stdio.h>
 
 
int main() 
{
    int i=111;
    printf("Wartosc zmiennej i = %d\n", i);
    printf("Adres zmiennej i = %p\n", &i);
    
    int* j;
    j = &i;
    printf("Wartosc w miejscu wskazywanym przez j = %d\n", *j);
    printf("Wartosc j to adres = %p\n", j);
    
    return 0;
}