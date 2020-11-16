#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    bool tab[n+1];
	
	printf("Podaj zakres górny przedziału: ");
	scanf("%d", &n);
	
	for(int i=2; i<=n; i++) //'zerowanie' tablicy = przypisanie wartosci TRUE
		tab[i] = true;
	
	for (int i=2; i<n;i++){
        for(int w = i+i; w<=n; w+=i)
        {
            tab[w] = false;
        }
    }
	
	printf("Kolejne liczby pierwsze do %d : ", n);
	
	for(int i=2; i<=n; i++)
		if(tab[i])
			printf("%d ", i);
	
	printf("\n");
	
    return 0;
}