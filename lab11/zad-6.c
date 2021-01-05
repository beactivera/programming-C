#include <stdio.h>
#include <string.h>
struct Book
{
    char title[20];
    char author[20];
    int  year;
    int  pages; 
};

void display(struct Book book);
void dodajKsiazke(struct Book baza_ksiazek[], int* aktualna_ilosc_ksiazek);
struct Book* usunKsiazke(struct Book baza_ksiazek[], int* aktualna_ilosc_ksiazek);
void szukajPoRoku(struct Book baza_ksiazek[]);
void szukajPoAutorze(struct Book baza_ksiazek[]);

const int maks_ilosc = 20;

int main(){
    int aktualna_ilosc_ksiazek = 0;
    struct Book baza_ksiazek[maks_ilosc];

    while(1) {
        printf("INFORMACJE O TWOICH KSIAZKACH\nWybierz jedna z ponizszych opcji:\n  1 - dodaj ksiazke\n  2 - odejmij ksiazke\n  3 - wyszukaj po roku\n  4 - wyszukaj po roku\n");

        int cyfra;
        scanf("%d",&cyfra);

        if (cyfra >= 1 && cyfra < 4){
            switch(cyfra) {
            case 1 : dodajKsiazke(baza_ksiazek, &aktualna_ilosc_ksiazek); break;
            case 2 : baza_ksiazek = usunKsiazke(baza_ksiazek, &aktualna_ilosc_ksiazek); break;
            case 3 : szukajPoRoku(baza_ksiazek); break;
            case 4 : szukajPoAutorze(baza_ksiazek); break;
            }
        }
        else {
            printf("Nie ma takiej opcji. Ponownie podaj numer:");
            scanf("%d",&cyfra);
        }
    }
    // struct Book arrBooks[5]= {
    //     {"Romeo i Julia", "William Shakespeare", 1595, 120},
    //     {"Hamlet", "William Shakespeare", 1600, 180},
    //     {"Carrie", "Stephen King", 1974, 405},
    //     {"To", "Stephen King", 1986, 399},
    //     {"Nie mów nikomu", "Harlan Coben",2001, 278}
    // };

    // int n = sizeof arrBooks/ sizeof arrBooks[0];
    // for(int i=0; i<n; i++){
    //     display(arrBooks[i]);
    // }
    return 0;
}

void display(struct Book book){
        printf("title: %s\n", book.title);
        printf("author: %s\n", book.author);
        printf("year: %d\n", book.year);
        printf("pages: %d\n", book.pages);
        printf("\n");
}

void dodajKsiazke(struct Book baza_ksiazek[], int* aktualna_ilosc_ksiazek){
    printf("Podaj tytul: ");
    scanf("&s", baza_ksiazek[*aktualna_ilosc_ksiazek].title);
    printf("Podaj autora: ");
    scanf("&s", baza_ksiazek[*aktualna_ilosc_ksiazek].author);
    printf("Podaj rok wydania: ");
    scanf("&d", &baza_ksiazek[*aktualna_ilosc_ksiazek].year);
    printf("Podaj ilosc stron: ");
    scanf("&d", &baza_ksiazek[*aktualna_ilosc_ksiazek].pages);
    *aktualna_ilosc_ksiazek++;
}

struct Book* usunKsiazke(struct Book baza_ksiazek[], int* aktualna_ilosc_ksiazek){
    struct Book nowa_baza[maks_ilosc];
    int ilosc_w_nowej_bazie = 0;
    char title[20];
    printf("Podaj tytul: ");
    scanf("%s", title);
    for(int i=0; i<*aktualna_ilosc_ksiazek; i++){
        if(!strcmp(baza_ksiazek[i].title, title)){
            nowa_baza[ilosc_w_nowej_bazie] = baza_ksiazek[i];
            ilosc_w_nowej_bazie++;
        }
    }
    baza_ksiazek = nowa_baza;
    *aktualna_ilosc_ksiazek = ilosc_w_nowej_bazie;
    for(int i=0; i<*aktualna_ilosc_ksiazek; i++){
        display(baza_ksiazek[i]);
    }
    return baza_ksiazek;
}

void szukajPoRoku(struct Book arrBooks[]){
    int year;
    printf("Podaj rok: ");
    scanf("%d", year );
    int n = sizeof arrBooks/ sizeof arrBooks[0];
    for(int i=0; i<n;i++){
        if(arrBooks[i].year == year){
            display(arrBooks[i]);
        }
    }
}

void szukajPoAutorze(struct Book arrBooks[]){
    char author;
    printf("Podaj rok: ");
    scanf("%s", author );
    int n = sizeof arrBooks/ sizeof arrBooks[0];
    for(int i=0; i<n;i++){
        if(arrBooks[i].author == author){
            display(arrBooks[i]);
        }
    }
}