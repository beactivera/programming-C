#include <stdio.h> 
struct Ulamek
{
    int licznik;
    int mianownik;
};

struct Ulamek skracanie(struct Ulamek);
struct Ulamek suma(struct Ulamek, struct Ulamek);
struct Ulamek roznica(struct Ulamek, struct Ulamek);
struct Ulamek mnozenie(struct Ulamek, struct Ulamek);
struct Ulamek dzielenie(struct Ulamek, struct Ulamek);

int main() {

    struct Ulamek u1 = {1,2},
                  u2 = {1,3},
                  u3 = {7,2},
                  u4 = {2,3},
                  u5 = {10,3};
    struct Ulamek u6,u7,u8,u9,u10;
    u6 = suma(u1, u2);
    printf("%d/%d\n",u6.licznik, u6.mianownik);
    u7 = dzielenie(u3, u4);
    printf("%d/%d\n",u7.licznik, u7.mianownik);
    u8 = mnozenie(u6, u7);
    printf("%d/%d\n",u8.licznik, u8.mianownik);
    u9 = roznica(u8, u5);
    printf("%d/%d\n",u9.licznik, u9.mianownik);
    u10 = skracanie(u9);
    printf("%d/%d",u10.licznik, u10.mianownik);
}

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