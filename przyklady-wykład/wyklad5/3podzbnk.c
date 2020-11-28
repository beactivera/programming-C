#include<stdio.h>
 
int main() 
{
    int k,n,i;
    printf("Program wypisuje wszystkie k elementowe podzbiory zbioru {1,...,n}\n");
    printf("Podaj n: ");
    scanf("%d",&n);
    printf("Podaj k<n: ");
    scanf("%d",&k);
    
    int podz[k];
 
    // inicjalizacja
    for (i=0; i<k; i++)
        podz[i] = i+1;
        
    do 
    {
        // wypisz podzbior
        for (i=0; i<k; i++)
            printf("%d ", podz[i]);
        printf("\n");
       
        // aktualizuj podzbior
        i=k-1;
        while (i>=0 && podz[i]==n-k+i+1)
            i--;
        if (i>=0)
        {
            podz[i]++;
            for (int j=i+1; j<k; j++)
                podz[j]=podz[j-1]+1;
        }
    } while (i>=0);
    
    return 0;
}