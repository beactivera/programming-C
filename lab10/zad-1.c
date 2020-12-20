#include <stdio.h>
#include <string.h>

int main() 
{ 
    char str[100]; 
    printf("Podaj swoje motto: \n"); 
    fgets(str,100,stdin); 
    int dlugosc = strlen(str)-1;
    printf("Dlugosc %s lancucha wynosi %d znakow. \n",str,dlugosc); 
    return 0; 
} 