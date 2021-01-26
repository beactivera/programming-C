#include<stdio.h>

typedef struct 
{
    char imie[16];
    double liczba;
    int wiek;
} TOsoba;

int main()
{
    FILE *f = fopen("danebin.bin","wb");
    if (f == NULL)
    {
        printf("Blad");
        return 1;
    }
    
    TOsoba lista[3] = {{"Ala",3.14,19},{"Adam",1.0/7,10},{"Karol",2.1,12}};
    
    fwrite(lista, sizeof(TOsoba), 3, f);
    
    fclose(f);
    return 0;
}
