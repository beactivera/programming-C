#include <stdio.h>

int main()
{
    int n, m;
    printf("Tworzenie tabliczki mnozenia.\n"):
    printf("Podaj jej szerokosc: ");
    scanf("%d",&n);
    printf("Podaj jej dlugosc: ");
    scanf("%d",&m);
    
    for(int i=1; i<=m;i++){
        for(int j=1; j<=n, j++){
            printf("%d", i*j);
        }
    }

  return 0;
}