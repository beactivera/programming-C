#include <stdio.h>
#include <math.h>

int main()
{
    printf("Podaj jeden znak: ");
    char znak_char;
    scanf("%c", &znak_char);
    
    int znak_int = (int)znak_char;
    
    int ascii_0 = 48,
        ascii_9 = 57,
        ascii_A = 65,
        ascii_Z = 90,
        ascii_a = 97,
        ascii_z = 122;
    

    if (ascii_0<=znak_int && znak_int<=ascii_9)
    {   
        printf("wczytany znak jest cyfra");
    }
    if (ascii_A<=znak_int && znak_int<=ascii_Z)
    {
        printf("wczytany znak jest wielka litera");
    }
    if (ascii_a<=znak_int && znak_int<=ascii_z)
    {
        printf("wczytany znak jest mala litera");  
    }     
    if(znak_int<48 || (znak_int>57 && znak_int<65) || (znak_int>90 && znak_int<97) || znak_int>122)
    {
        printf("wczytany znak nie jest litera ani cyfra");
    }
    

    return 0;
}
