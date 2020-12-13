#include <stdio.h>

void czynniki(int n);

int main(){
    
    int n;
    printf("Podaj liczbe naturalna: ");
    scanf("%d", &n);

    czynniki(n);

    return 0;
}

void czynniki(int n){
        for(int j=1; j<=n; j++){
            int reszta = n%j;
            printf("%d ", j);
            if(reszta>0){
                czynniki(n-1);
            }
        }
        printf("\n");

}