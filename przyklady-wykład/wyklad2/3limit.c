#include<stdio.h>
#include<limits.h>
 
int main()
{
    printf("typ short:\n");
    printf(" - liczba bajtow: %lu\n", sizeof(short));
    printf(" - minimalna wartosc: %d\n", SHRT_MIN);
    printf(" - maksymalna wartosc: %d\n", SHRT_MAX);
    
    printf("typ int:\n");
    printf(" - liczba bajtow: %lu\n", sizeof(int));
    printf(" - minimalna wartosc: %d\n", INT_MIN);
    printf(" - maksymalna wartosc: %d\n", INT_MAX);
 
    printf("typ long:\n");
    printf(" - liczba bajtow: %lu\n", sizeof(long));
    printf(" - minimalna wartosc: %ld\n", LONG_MIN);
    printf(" - maksymalna wartosc: %ld\n", LONG_MAX);
    
    return 0;
}