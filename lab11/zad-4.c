#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int sumaTab(int, int, int, int);

int main() {

    const int max_val = 10;
    int n, m;

    printf("Podaj liczbe wierszy: ");
    scanf("%d", &n);
    printf("Podaj liczbe kolumn: ");
    scanf("%d", &m);

    int tab[n][m];
    srand( time( NULL ) );

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){

            tab[i][j] = rand() % max_val;
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }

    int min_sum = max_val;
    int min_row;
    int min_col;
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < m-1; j++){
            int current_val = sumaTab(&tab[0][0], i, j, m);
            if(min_sum > current_val) {
                min_sum = current_val;
                min_row = i;
                min_col = j;
            }
        }
    }
    printf("Miejsce znajduje się w wierszu %d oraz kolumnie %d. Minimalna suma wynosi %d.\n", min_row, min_col, min_sum);
    return 0;
}

int sumaTab(int tab, int row, int col, int m){
    return (tab+m*row+col) + (tab+m*row+col+1) + (tab+m*(row+1)+col) + (tab+m*(row+1)+col+1);
