#include "biblioteka1.h"
#include <stdio.h>
int main ()
{
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
    
    return 0;
} 