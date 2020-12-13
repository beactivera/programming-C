#include <stdio.h>
#include <math.h>

int main()
{
    printf("Podaj jeden znak: ");
    char znak_char;
    scanf("%c", &znak_char);
    
    int znak_int = (int)znak_char;
    
    int ascii_A = 65;
    int ascii_Z = 90;
    int ascii_a = 97;
    int ascii_z = 122;
    
    if (ascii_A<=znak_int && znak_int<=ascii_Z || ascii_a<=znak_int && znak_int<=ascii_z)
        printf("Podany znak: %c jest litera alfabetu lacinskiego", znak_char);
    else
        printf("Podany znak: %c nie jest litera alfabetu lacinskiego", znak_char);

    return 0;
}
