#include <stdio.h>

int sumaCyfr(int n);


int main()
{
    int n, suma;
    
    printf("Podaj liczbe: ");
    scanf("%d", &n);
    
    suma = sumaCyfr(n);
    
    printf("Suma cyfr liczby %d wynosi %d\n", n, suma);
    
    return 0;
}

int sumaCyfr(int n)
{
    int suma;
    if(n == 0){
        return 0;
    }
    else{
        suma = (n%10)+ sumaCyfr(n/10);
    }
        
    return suma;
}