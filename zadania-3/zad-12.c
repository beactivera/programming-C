#include <stdio.h>

int main() {

    int x, cj, cd, sum=0;

    printf("Podaj liczbe naturalna: ");
    scanf("%d", &x);

    if(x>0) {
            
        cj = x % 10;

        cd = x/10;

        sum = cj + cd;
    }

    printf("Suma cyfr wynosi = %d\n", sum);

    return 0;
}