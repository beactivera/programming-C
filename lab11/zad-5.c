#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define R 10
#define C 10

char szukajPoziomo(char tab[R][C]);
char szukajPionowo(char tab[R][C]);
char szukajUkos(char tab[R][C]);

int main() {


    char tab[R][C];
    srand( time( NULL ) );

    // tablica liter
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){

            tab[i][j] = 'A' + rand() % 26;
            printf("%c",tab[i][j]);
        }
        printf("\n");
    }

    szukajPoziomo(tab);
    szukajPionowo(tab);
    szukajUkos(tab);

    printf("\n");


    return 0;
}

char szukajPoziomo(char tab[R][C]){
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            if(tab[i][j] == 76){
                if(tab[i][j+1] == 79){
                    if(tab[i][j+2] == 83){
                        printf("Poziomo\n");
                    }
                }
            }
            if(tab[i][j] == 76){
                if(tab[i][j-1] == 79){
                    if(tab[i][j-2] == 83){
                        printf("Poziomo wspak\n");
                    }
                }
                
            }
        }
    }
}

char szukajPionowo(char tab[R][C]){
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            if(tab[i][j] == 76){
                if(tab[i+1][j] == 79){
                    if(tab[i+2][j] == 83){
                        printf("Pionowo\n");
                    }
                }
            }
            if(tab[i][j] == 76){
                if(tab[i-1][j] == 79){
                    if(tab[i-2][j] == 83){
                        printf("Pionowo wspak\n");
                    } 
                }
            }
        }
    }
}


char szukajUkos(char tab[R][C]){
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            if(tab[i][j] == 76){
                if(tab[i+1][j+1] == 79){
                    if(tab[i+2][j+2] == 83){
                        printf("Ukos prawo-dol\n");
                    }
                }
            }
            if(tab[i][j] == 76){
                if(tab[i+1][j-1] == 79){
                    if(tab[i+2][j-2] == 83){
                        printf("Ukos lewo-dol\n");
                    }
                }
            }

            if(tab[i][j] == 76){
                if(tab[i-1][j+1] == 79){
                    if(tab[i-2][j+2] == 83){
                        printf("Ukos prawo-gora\n");
                    }
                }
            }
            if(tab[i][j] == 76){
                if(tab[i-1][j-1] == 79){
                    if(tab[i-2][j-2] == 83){
                        printf("Ukos lewo-gora\n");
                    }
                }
            }
        }
    }
}

  