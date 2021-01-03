#include <stdio.h>
struct Book
{
    char title[20];
    char author[20];
    int  year;
    int  pages;
};

void display(struct Book book);
void dodajKsiazke(struct Book book);
void usunKsiazke(struct Book arrBooks[]);
void szukajPoRoku(struct Book arrBooks[]);
void szukajPoAutorze(struct Book arrBooks[]);

int main(){

    // printf("INFORMACJE O TWOICH KSIAZKACH\nWybierz jedna z ponizszych opcji:\n  1 - dodaj ksiazke\n  2 - odejmij ksiazke\n  3 - wyszukaj po roku\n  4 - wyszukaj po roku\n");

    // int cyfra;
    // scanf("%d",&cyfra);

    // if (cyfra >= 1 && cyfra < 4){

    //   switch(cyfra) {
    //     case 1 : dodajKsiazke(); break;
    //     case 2 : usunKsiazke(); break;
    //     case 3 : szukajPoRoku(); break;
    //     case 4 : szukajPoAutorze(); break;
    //     }
    // } 
    // else {
    //   printf("Nie ma takiej opcji. Ponownie podaj numer:");
    //   scanf("%d",&cyfra);
    // }

    struct Book arrBooks[5]= {
        {"Romeo i Julia", "William Shakespeare", 1595, 120},
        {"Hamlet", "William Shakespeare", 1600, 180},
        {"Carrie", "Stephen King", 1974, 405},
        {"To", "Stephen King", 1986, 399},
        {"Nie mów nikomu", "Harlan Coben",2001, 278}
    };

    int n = sizeof arrBooks/ sizeof arrBooks[0];
    for(int i=0; i<n; i++){
        display(arrBooks[i]);
    }

    return 0;
}

void display(struct Book book){
        printf("title: %s\n", book.title);
        printf("author: %s\n", book.author);
        printf("year: %d\n", book.year);
        printf("pages: %d\n", book.pages);
        printf("\n");
}

void dodajKsiazke(struct Book book){

    printf("Podaj tytul: ");
    scanf("&s", book.title);
    printf("Podaj autora: ");
    scanf("&s", book.author);
    printf("Podaj rok wydania: ");
    scanf("&d", book.year);
    printf("Podaj ilosc stron: ");
    scanf("&d", book.pages);
}

void usunKsiazke(struct Book arrBooks[]){
    char title;
    printf("Podaj tytul: ");
    scanf("%s", title );
    int n = sizeof arrBooks/ sizeof arrBooks[0];
    for(int i=0; i<n;i++){
        if(arrBooks[i].title == title){
            arrBooks[i] = arrBooks[i+1];
        }
    }
    for(int i=0; i<n-1; i++){
        display(arrBooks[i]);
    }
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
    scanf("%s", year );
    int n = sizeof arrBooks/ sizeof arrBooks[0];
    for(int i=0; i<n;i++){
        if(arrBooks[i].author == author){
            display(arrBooks[i]);
        }
    }
}


