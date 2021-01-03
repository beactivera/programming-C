#include <stdio.h>
struct Ulamek
{
    int licznik;
    int mianownik;
};

void skracanie(struct Ulamek ulamek);
void suma(struct Ulamek ulamek1, struct Ulamek ulamek2);
void roznica(struct Ulamek ulamek1, struct Ulamek ulamek2);
void iloczyn(struct Ulamek ulamek1, struct Ulamek ulamek2);
void iloraz(struct Ulamek ulamek1, struct Ulamek ulamek2);

int main(){

    struct Ulamek u1 = {1, 2},
                  u2 = {1,3},
                  u3 = {7,2},
                  u4 = {2,3},
                  u5 = {10,3};
    struct Ulamek u6;
    
    u6 = suma(u1+u2);
    printf("%d/%d",u6.licznik, u6.mianownik);


}

void skracanie(struct Ulamek ulamek){
    int a=2;
    do
    {
        if((ulamek.licznik % a) == 0 && (ulamek.mianownik % a) == 0)
        {
            ulamek.licznik /= a;
            ulamek.mianownik /= a;
            a--;
        }
        a++;
    } while(a<ulamek.mianownik && a<ulamek.licznik);

    return ulamek;
    
}

void suma(struct Ulamek u1, struct Ulamek u2){
    struct Ulamek u;
    u.licznik = u1.licznik*u2.mianownik + u2.licznik*u1.mianownik;
    u.mianownik = u1.mianownik* u2.mianownik;

    skracanie(u);
}

void roznica(struct Ulamek u1, struct Ulamek u2){
    struct Ulamek u;
    u.licznik = u1.licznik*u2.mianownik - u2.licznik*u1.mianownik;
    u.mianownik = u1.mianownik* u2.mianownik;

    skracanie(u);
}

void mnozenie(struct Ulamek u1, struct Ulamek u2){
    struct Ulamek u;
    u.licznik = u1.licznik*u2.licznik;
    u.mianownik = u1.mianownik*u2.mianownik;

    skracanie(u);
}

void dzielenie(struct Ulamek u1, struct Ulamek u2){
    struct Ulamek u;
    u.licznik = u1.licznik*u2.mianownik;
    u.mianownik = u1.mianownik*u2.licznik;

    skracanie(u);
}



