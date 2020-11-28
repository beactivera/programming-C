#include<stdio.h>
 
void zwiekszPredkosc(int*, int);
 
int main() 
{
    int v = 5;
    printf("Aktualna predkosc to: %d \n", v);    
    zwiekszPredkosc(&v, 10);    
    printf("Aktualna predkosc to: %d \n", v);
    return 0;
}
 
void zwiekszPredkosc(int* v, int deltav)
{
    *v+=deltav;
}