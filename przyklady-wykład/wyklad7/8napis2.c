#include<stdio.h>
 
void pokaz(char *);
 
int main()
{
    char napis[] = "Ala ma kota";
    printf("%s\n", napis);
    printf("%lu\n", sizeof(napis));
    
    pokaz(napis);
    
    return 0;
}
 
void pokaz(char * wiadomosc)
{
    printf("%s\n", wiadomosc);
    printf("%lu\n", sizeof(wiadomosc));
}