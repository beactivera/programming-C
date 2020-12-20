#include<stdio.h>
#include<stdbool.h>

typedef struct 
{
    int d;
    int m;
    int r;
    bool czyWeekend;
    bool czyPoniedzialek;
} TData1;

typedef struct 
{
    unsigned int d:5;
    unsigned int m:4;
    unsigned int r:14;
    unsigned int czyWeekend:1;
    unsigned int czyPoniedzialek:1;
} TData2;

int main()
{
    TData1 d1 = {12,4,2014,0,1};    
    TData2 d2 = {30,6,1914,1,0};    
    
    printf("Size of bool: %lu\n", sizeof(bool));
    printf("Size of int: %lu\n", sizeof(int));    
    printf("Size of TData1: %lu\n", sizeof(TData1));        
    printf("Size of TData2: %lu\n", sizeof(d2));    
    
    printf("%d-%d-%d %d %d\n", d1.d, d1.m, d1.r, d1.czyWeekend, d1.czyPoniedzialek);
    printf("%d-%d-%d %d %d\n", d2.d, d2.m, d2.r, d2.czyWeekend, d2.czyPoniedzialek);
    return 0;
}

