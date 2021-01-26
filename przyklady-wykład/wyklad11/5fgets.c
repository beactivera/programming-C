#include<stdio.h>
#include<string.h>

int main()
{
    FILE *f = fopen("dan.txt","rt");
    if (f == NULL)
    {
        printf("Blad otwarcia pliku\n");
        return 1;
    }
    
    char s[100];
    if (fgets(s, 100, f) != NULL)
        printf("Odczytalem napis: <<%s>> (dlugosc: %lu)\n", s, strlen(s));
  
    fclose(f);
    return 0;
}
