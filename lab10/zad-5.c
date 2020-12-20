#include <stdio.h>
#include <string.h>


// void find_frequency(char [], int []);

int main()
{
    char lancuch[100], wynik;
    int len, count[256] = {0}, max = -1;

    printf ("Podaj lancuch: ");
    fgets(lancuch,100,stdin);

    len = strlen(lancuch);

    for(int i=0; i<len; i++){
        count[lancuch[i]]++;
    }
    

    for (int i = 0; i<len; i++){
        if(count[lancuch[i]]>max){
            max = count[lancuch[i]];
            wynik = lancuch[i];
        }
    }

    printf("Najczesciej wystepuje litera: %c\n",wynik);

    
    return 0;    
}
