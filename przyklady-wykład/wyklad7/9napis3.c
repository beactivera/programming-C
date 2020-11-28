#include<stdio.h>
 
int main()
{
    char imie[40], nazwisko[40];
    printf("Podaj imie i nazwisko: ");
    scanf("%39s %39s", imie, nazwisko);
    printf("%s, %s\n", nazwisko, imie);    
    return 0;
}