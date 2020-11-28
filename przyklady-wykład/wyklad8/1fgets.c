#include<stdio.h>
 
int main()
{
    char zdanie[3];
 
    printf("Podaj zdanie: ");
    fgets(zdanie, 3, stdin);
    printf("Zdanie to: %s\n", zdanie);
 
    return 0;
}