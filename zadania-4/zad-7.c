#include <stdio.h>
#include <math.h>
  
int main() 
{ 
    int n, i, j, licznik = 0;
    printf("Podaj liczbe naturalna: ");
    scanf("%d", &n);
    
    
    for (i = 1; i * i <= n; i++) {

        for (j = 1; j * j <= n; j++) {

            if ((i*i+j*j) == n){ 
                licznik += 1;
            } 
            else{
                licznik = 0;
            } 
        } 
        
    }

    if(licznik>0)
        printf("Podana liczbe mozna uzyskac jako sume dwoch kwadratow.");
    else
    {
        printf("Podana liczbe nie mozna uzyskac jako sume dwoch kwadratow.");
    }
    

    return 0;
} 