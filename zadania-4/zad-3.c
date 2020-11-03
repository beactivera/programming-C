#include <stdio.h>

int main()
{
    int n;
    printf("Wszystkie zbiory 3-elementowe zbioru n-elemenetowego.\n");
    printf("Podaj liczbe: ");
    scanf("%d", &n);
    for(int i=1 ; i<n ; i++){

        for(int j = i+1 ; j<n ; j++){

            for(int k= j+1 ; k<=n ; k++){
                printf("{%d,%d,%d}\n", i, j, k);
            }
        }
    }
}