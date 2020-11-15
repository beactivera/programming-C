#include <stdio.h>

int main(){
    
    int N = 20;
    int tab[N];
    for(int i=0; i<N; i++){
        tab[i] = i+1;
        printf("%d ", tab[i]);
    }

    // printf("tab = [");
    // for(int i=0; i<N-1; i++){
    //     printf("%d ", tab[i]);
    // }
    // printf("%d]\n", tab[N-1]);

    return 0;
}