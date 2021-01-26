#include<stdio.h>

int main()
{
    FILE *f = fopen("dane.txt","rb+");
    if (f == NULL)
    {
        printf("Brak pliku");
        return 1;
    }
    
    printf("Pozycja to: %ld\n", ftell(f));
    fseek(f, 0, SEEK_END);
    printf("Pozycja to: %ld\n", ftell(f)); 
    fseek(f, 10, SEEK_SET);
    printf("Pozycja to: %ld\n", ftell(f)); 
    fseek(f, 10, SEEK_CUR);
    printf("Pozycja to: %ld\n", ftell(f));
    fgetc(f);
    printf("Pozycja to: %ld\n", ftell(f));
    rewind(f);
    printf("Pozycja to: %ld\n", ftell(f));
    
    fclose(f);
    return 0;
}
