#include <stdio.h>
#include <string.h>

int main() 
{ 
    char imie[50];
    char nazwisko[100];
    int wiek; 
    printf("Podaj imie: "); 
    scanf("%s", imie);
    printf("Podaj nazwisko: "); 
    scanf("%s", nazwisko);
    printf("Podaj wiek: "); 
    scanf("%d",&wiek); 
    printf("%s, %s, wiek: %d.\n",nazwisko, imie, wiek); 
    return 0; 
} 