#include "biblioteka1.h"
struct Ulamek skracanie(struct Ulamek ulamek){
    int a=2;
    do
    {
        if((ulamek.licznik % a) == 0 && (ulamek.mianownik % a) == 0)
        {
            ulamek.licznik /= a;
            ulamek.mianownik /= a;
            a=2;
        }
        else{
            a++;
        }
        
    } while(a<ulamek.mianownik && a<ulamek.licznik);

    return ulamek;
}

struct Ulamek suma(struct Ulamek u1, struct Ulamek u2){
    struct Ulamek u;
    u.licznik = u1.licznik*u2.mianownik + u2.licznik*u1.mianownik;
    u.mianownik = u1.mianownik* u2.mianownik;

    return u;
}

struct Ulamek roznica(struct Ulamek u1, struct Ulamek u2){
    struct Ulamek u;
    u.licznik = u1.licznik*u2.mianownik - u2.licznik*u1.mianownik;
    u.mianownik = u1.mianownik* u2.mianownik;

    return u;
}

struct Ulamek mnozenie(struct Ulamek u1, struct Ulamek u2){
    struct Ulamek u;
    u.licznik = u1.licznik*u2.licznik;
    u.mianownik = u1.mianownik*u2.mianownik;

    return u;
}

struct Ulamek dzielenie(struct Ulamek u1, struct Ulamek u2){
    struct Ulamek u;
    u.licznik = u1.licznik*u2.mianownik;
    u.mianownik = u1.mianownik*u2.licznik;

    return skracanie(u);
}