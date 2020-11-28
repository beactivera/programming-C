#include<stdio.h>
#include<stdbool.h>
 
typedef union
{
    int sztuki;
    float masa;
} TIlosc;
 
int main()
{
    TIlosc i = {4};
    i.masa = 3.15;
    printf("%d\n", i.sztuki);
    printf("%f\n", i.masa);
    return 0;
}