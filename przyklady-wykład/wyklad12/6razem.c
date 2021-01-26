#include<stdio.h>

typedef struct 
{
    char imie[16];
    double liczba;
    int wiek;
} TOsoba;

int main()
{
    FILE *f = fopen("danebin.bin","rb+");
    if (f == NULL)
    {
        printf("Brak pliku");
        return 1;
    }
    
    TOsoba osoba;
    
    fread(&osoba, sizeof(TOsoba), 1, f);
    fread(&osoba, sizeof(TOsoba), 1, f);    
    osoba.liczba+=1;    
        
    fseek(f,-sizeof(TOsoba),SEEK_CUR);    

    fwrite(&osoba, sizeof(TOsoba), 1, f);        

    rewind(f);
    
    while (fread(&osoba, sizeof(TOsoba), 1, f)==1)
    {
        printf("imie: %s\nliczba: %f\nwiek: %d\n\n", osoba.imie, osoba.liczba, osoba.wiek);        
    }
    
    fclose(f);
    return 0;
}
