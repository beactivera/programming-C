#include<stdio.h>
#include<string.h>
 
int main(int argc, char *argv[])
{
    char zdanie[100] = "Ala ma";
    char wyraz[100] = "kota";
 
    strcat(zdanie, " ");   
    strcat(zdanie, wyraz); 
 
    printf("%s\n", zdanie);
 
    return 0;
}