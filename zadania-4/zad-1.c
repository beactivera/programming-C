#include <stdio.h>
#include <math.h>

int main() 
{
    int n,m,i,j, iloczyn;
    printf("Tabliczka mnożenia o wymiarach n x m.\n");
    printf("Podaj n: ");
    scanf("%d", &n);
    printf("Podaj m: ");
    scanf("%d", &m);

    for (i = 1; i <=m; i++) {
        for(j =1; j<=n; j++){
            iloczyn = i*j;
            printf("%d ",iloczyn);
        }
        printf("\n");
    }

    return 0;
}