#include<stdio.h>
#include<string.h>
 
int main()
{
    char n1[] = "abrakadabra";
    char n2[] = "ada";
    if (strstr(n1, n2))
    {
        printf("Znalazlem %s w %s\n", n2, n1);
        int poz = strstr(n1, n2) - n1 + 1;
        printf("Na pozycji: %d\n", poz);
    }
    else
        printf("Nie znalazlem %s w %s\n", n2, n1);    
    return 0;
}