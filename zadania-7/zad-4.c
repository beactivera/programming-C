#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool liczby_pitagorejskie(int *a, int *b, int *c, bool *pitagorejskie);

int main(){

    int n;
    int a,b,c;
    bool pitagorejskie = false;

    printf("Podaj gorny zakres liczb pitagorejskich: ");
    scanf("%d", &n);

    for(c = 1; c <= n; c++){
        for(b = 1; b <= n; b++){
            for(a = 1; a <= n; a++){

                liczby_pitagorejskie(&a, &b, &c,&pitagorejskie);

                if (pitagorejskie) {
                    printf("(%d, %d, %d)\n", a,b,c);
                }
            }
        }
    }    

    return 0;
}

bool liczby_pitagorejskie(int *a, int *b, int *c, bool *pitagorejskie){

    if (*a * (*a) + *b * (*b) == *c * (*c)){
            *pitagorejskie = true;
    }
    else{
        *pitagorejskie = false;
    }

}