#include<stdio.h>
 
int main()
{
    char imie[3];
    char zdanie[300];
 
    printf("Podaj imie: ");
    scanf("%s", imie);
    printf("imie=%s\n", imie);    
 
    printf("Podaj zdanie: ");
    scanf("%299s", zdanie);
    printf("zdanie=%s\n", zdanie);
 
    return 0;
}