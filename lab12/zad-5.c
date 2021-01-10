#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct{
    char title[20];
    char author[20];
    int  year;
    int  pages;
}ksiazka;

void display(ksiazka ksiazki[]);
void odczytajZPlikuBinarnie(ksiazka ksiazki[], int* pozycja);
void zapiszDoPlikuBinarnie(ksiazka ksiazki[], int pozycja);
bool swapKsiazki(ksiazka*, ksiazka*);
void sortujKsiazki(ksiazka[], int pozycja);


int main(){
    int pozycja = 0;
    ksiazka ksiazki[20] = {0};
    odczytajZPlikuBinarnie(ksiazki, &pozycja);
    sortujKsiazki(ksiazki, pozycja);
    zapiszDoPlikuBinarnie(ksiazki, pozycja);

    return 0;
}

void display(ksiazka ksiazki[]){
        printf("title: %s\n", ksiazki[0].title);
        printf("author: %s\n", ksiazki[0].author);
        printf("year: %d\n", ksiazki[0].year);
        printf("pages: %d\n", ksiazki[0].pages);
        printf("\n");
}


void odczytajZPlikuBinarnie(ksiazka ksiazki[], int* pozycja) {
    FILE* plik = plik = fopen("ksiazki_binarnie.bin", "rb");
    int iter = 0;
    printf("ODCZYTANE \n");
    while (!feof(plik)) {
        int counter = 0;
        if(fread(ksiazki[iter].title, 20*sizeof(char), 1, plik) == 1)
            counter++;
        if(fread(ksiazki[iter].author, 20*sizeof(char), 1, plik) == 1)
            counter++;
        if(fread(&ksiazki[iter].year, sizeof(int), 1, plik) == 1)
            counter++;
        if(fread(&ksiazki[iter].pages, sizeof(int), 1, plik) == 1)
            counter++;
        if(counter == 4) {
            display(ksiazki+iter);
            iter++;
            (*pozycja)++;
        }
    }
    fclose(plik);
};


void zapiszDoPlikuBinarnie(ksiazka ksiazki[], int pozycja) {
    printf("POSEGREGOWANE \n");
    FILE* plik = fopen("ksiazki_binarnie_posegregowane.bin", "wb");
    for(int i=0; i<pozycja; i++){
        display(ksiazki+i);
        fwrite(ksiazki[i].title, sizeof(ksiazki[i].title), 1, plik);
        fwrite(ksiazki[i].author, sizeof(ksiazki[i].author), 1, plik);
        fwrite(&ksiazki[i].year, sizeof(ksiazki[i].year), 1, plik);
        fwrite(&ksiazki[i].pages, sizeof(ksiazki[i].pages), 1, plik);
    }
   fclose(plik);
}


bool swapKsiazki(ksiazka* ksiazka1, ksiazka* ksiazka2) {
    if(ksiazka1->year > ksiazka2->year) {
        ksiazka tmp;
        memcpy(&tmp, ksiazka2, sizeof(*ksiazka2));
        memcpy(ksiazka2, ksiazka1, sizeof(*ksiazka1));
        memcpy(ksiazka1, &tmp, sizeof(tmp));
        return true;
    }
    return false;
}


void sortujKsiazki(ksiazka ksiazki[], int pozycja) {
    int number_of_swaps = 0;
    do {
        number_of_swaps = 0;
        for(int i=0; i<pozycja-1; i++) {
            if(swapKsiazki(&ksiazki[i], &ksiazki[i+1])) {
                number_of_swaps++;
            }
        }
    }while(number_of_swaps);
}