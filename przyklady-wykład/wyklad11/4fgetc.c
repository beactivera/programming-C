#include<stdio.h>

int main()
{
    FILE *f = fopen("dan.txt","rt");
    if (f == NULL)
    {
        printf("Blad otwarcia pliku\n");
        return 1;
    }
    char c;
    c = fgetc(f);
    if (c != EOF)
        printf("Odczytalem znak: %c\n", c);
    else
        printf("Koniec pliku\n");    
    fclose(f);
    return 0;
}