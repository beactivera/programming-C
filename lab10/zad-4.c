#include <stdio.h>
#include <string.h>

int main()
{
    char lancuch[100];
    int dlugosc;

    printf ("Podaj lancuch: \n");
    fgets(lancuch,50,stdin);
    dlugosc = strlen(lancuch);

    // petla dla liter
    for(int i=0 ; i<dlugosc; i++)
    {
        // zamiana malych na duze
        if(lancuch[i]>96 && lancuch[i]<=122){

            // zamiana z na A
            if(lancuch[i]==122){
                lancuch[i]=65; 
            }
            else{
            // o jeden wiecej
            lancuch[i]++;
            lancuch[i]=lancuch[i]-32;
            }
        }
        // zamiana duchych na male
        else if(lancuch[i]>64 && lancuch[i]<91){
            lancuch[i] = lancuch[i] +32;
        }

    }

    // petla dla cyfr
    for(int i=0 ; i<dlugosc; i++)
    {
        if(lancuch[i]>47 && lancuch[i]<57){
            lancuch[i]++;
        }
        else if(lancuch[i]==57){
            lancuch[i] = 48;
        }
    }

    // wyswietlenie zmienionego lancucha
    for (int i=0 ; i<dlugosc ; i++)
    printf("%c", lancuch[i]);

    return 0; 
    
}