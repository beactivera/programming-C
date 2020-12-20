#include <stdio.h>
#include <string.h>

int main() 
{ 
    char lancuch[100];
    char samogloski[5] = "aeiouyAEIOUY";
    int lenlan = strlen(lancuch)-1;
    int lensam = strlen(samogloski)-1;
    int licznik = 0;
    printf("Podaj lancuch: "); 
    fgets(lancuch, 100, stdin);
    
    
    for(int i=0; i<lenlan;i++){
        for(int k=0; i<lensam; k++){
            char* znak = strchr(lancuch[i], samogloski[k]);
            if(znak == samogloski[k]){
                licznik++;
            }
        }
    }
    printf("Liczba samoglosek: %d",licznik);

    return 0; 
} 
