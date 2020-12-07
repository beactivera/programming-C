#include <stdio.h>
#include <math.h>

int main()
 {
    int i = 0;
    float liczby[i],a;
    double suma_liczb = 0,srednia;
    float wart_min=1000, wart_max=0; 

    do{
        printf("Podaj liczbe rzeczywista: ");
        scanf("%f",&a);

        if(a == 0){
            break;
        }
        else{
            liczby[i] = a;

            if(liczby[i]<wart_min)
            {
                wart_min = liczby[i];
            }

            if(liczby[i]>wart_max)
            {
                wart_max = liczby[i];  
            }

            suma_liczb += liczby[i];
        
            i++;
        }

    }while(a!=0);

    srednia = suma_liczb/i;
    
    printf("Dla podanych liczb suma wynosi: %.2f, srednia arytm.: %.2f, min: %.2f, max: %.2f\n", suma_liczb,srednia,wart_min,wart_max);

    return 0;
 }