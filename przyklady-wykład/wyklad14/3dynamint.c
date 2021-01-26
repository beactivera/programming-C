#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *j;
    printf("Wartosc j przed malloc - adres = %p\n", j);      
    j=malloc(sizeof(int));
    if (j!=NULL)
    {
        *j = 10;
        printf("Wartosc w miejscu wskazywanym przez j = %d\n", *j);
        printf("Wartosc j to adres = %p\n", j);  
        free(j);
    }
    return 0;
}
