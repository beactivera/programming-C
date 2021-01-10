#include <stdio.h>
#include <string.h>

typedef struct{
    char title[20];
    char author[20];
    int  year;
    int  pages; 
}ksiazka;

void display(ksiazka ksiazki[]);
void dodaj(ksiazka ksiazki[], int* pozycja);
void usun(ksiazka ksiazki[], int* pozycja);
void szukajPoAutorze(ksiazka ksiazki[], int pozycja);
void szukajPoRoku(ksiazka ksiazki[], int pozycja);


int main(){
    int pozycja = 0;
    ksiazka ksiazki[20] = {0};


    while(1) {
        printf("INFORMACJE O TWOICH KSIAZKACH\nWybierz jedna z ponizszych opcji:\n  1 - dodaj ksiazke\n  2 - odejmij ksiazke\n  3 - wyszukaj po roku\n  4 - wyszukaj po autorze\n");

        int cyfra;
        scanf("%d",&cyfra);

        if (cyfra >= 1 && cyfra <= 4){
            switch(cyfra) {
            case 1 : dodaj(ksiazki, &pozycja); break;
            case 2 : usun(ksiazki, &pozycja); break;
            case 3 : szukajPoRoku(ksiazki,pozycja); break;
            case 4 : szukajPoAutorze(ksiazki,pozycja); break;
            }
        }
        else {
            printf("Nie ma takiej opcji. Ponownie podaj numer:");
            scanf("%d",&cyfra);
        }
    }
    return 0;
}

void display(ksiazka ksiazki[]){
        printf("title: %s\n", ksiazki[0].title);
        printf("author: %s\n", ksiazki[0].author);
        printf("year: %d\n", ksiazki[0].year);
        printf("pages: %d\n", ksiazki[0].pages);
        printf("\n");
}


void dodaj(ksiazka ksiazki[], int *pozycja) {
    char title[20], author[20];
    int year, pages;
    printf("Podaj tytul: ");
    scanf("%20s", title);
    printf("Podaj autora: ");
    scanf("%20s", author);
    printf("Podaj rok wydania: ");
    scanf("%d", &year);
    printf("Podaj liczbe stron: ");
    scanf("%d",&pages);
    strcpy(ksiazki[*pozycja].title, title);
    strcpy(ksiazki[*pozycja].author, author);
    ksiazki[*pozycja].year = year;
    ksiazki[*pozycja].pages = pages;
    (*pozycja)++;
}

void usun(ksiazka ksiazki[], int *pozycja) {
    int temp = *pozycja;
    char title[20];
    printf("Podaj tytul: ");
    scanf("%20s", title);
    while (temp--){
        if (strcmp(ksiazki[temp].title, title) == 0){
            for(int i=temp; i<*pozycja; i++){
                memcpy(&ksiazki[i], &ksiazki[i+1], sizeof(ksiazki[i+1]));
            };
            (*pozycja)--;
        }
    }
}
    

void szukajPoRoku(ksiazka ksiazki[], int pozycja){
    printf("Rok: ");
    int year;
    scanf("%d", &year);
    while (pozycja--){
        if (ksiazki[pozycja].year == year){
            display(ksiazki + pozycja);
        }
    }
}

void szukajPoAutorze(ksiazka ksiazki[], int pozycja) {
    printf("Autor: ");
    char author[20];
    scanf("%20s", author);
    while (pozycja--){
        if (strcmp(ksiazki[pozycja].author, author) == 0){
            display(ksiazki + pozycja);
        }
    }
}