#include <stdio.h>
struct PRACOWNIK{
    char imie[10];
    char nazwisko[20];
    char nip[7];
    char pesel[11];
};

void ustawPesel(struct PRACOWNIK pracownik);
void ustawNip(struct PRACOWNIK pracownik);
char pokazPracownika(struct PRACOWNIK pracownik);

int main(){

}

void ustawPesel(struct PRACOWNIK pracownik){
    char pesel[11];
    printf("Podaj PESEL");
    scanf("%s", &pesel);
    pracownik.pesel = pesel;
}
void ustawNip(struct PRACOWNIK pracownik){
    char nip[7];
    printf("Podaj NIP");
    scanf("%s", &nip);
    pracownik.nip = nip;
}
char pokazPracownika(struct PRACOWNIK pracownik){
    printf("imie: %s", pracownik.imie);
    prinf("nazwisko: %s", pracownik.nazwisko);
    printf("PESEL: %s", pracownik.pesel);
    printf("NIP: %s", pracownik.nip);

};