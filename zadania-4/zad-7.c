#include <stdio.h>
#include <math.h>
  
int main() 
{ 
    int n, i, j;
    printf("Podaj liczbę naturalną: ");
    scanf("%d", &n);
    
    
    for (i = 1; i * i <= n; i++) {

        for (j = 1; j * j <= n; j++) {

            if ((i*i+j*j) == n){ 
                printf("Jest to mozliwe.\n");
            }  
        } 

        printf("Nie jest to mozliwe.\n");
        
    }

    return 0;
} 