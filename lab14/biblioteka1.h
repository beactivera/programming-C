#ifndef BIBLIOTEKA_H
#define BIBLIOTEKA_H
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
#endif