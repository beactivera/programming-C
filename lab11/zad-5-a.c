#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define R 10
#define C 10

int x[] = { -1, -1, -1, 0, 0, 1, 1, 1 }; 
int y[] = { -1, 0, 1, -1, 1, -1, 0, 1 }; 

void patternSearch(char tab[R][C], char word[]);
bool search2D(char tab[R][C], int row, int col, char word[]);

int main() {


    char tab[R][C];
    srand( time( NULL ) );

    // tablica liter
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){

            tab[R][C] = 'A' + rand() % 26;
            printf("%c",tab[R][C]);
        }
        printf("\n");
    }

    patternSearch(tab,"LOS");

    printf("\n");


    return 0;
}

void patternSearch(char tab[R][C], char word[]){
    // Consider every point as starting 
    // point and search given word 
    for (int row = 0; row < R; row++){
        for (int col = 0; col < C; col++){
            if (search2D(tab, row, col, word)) {
               printf("Slowo znalezione na pozycji: %d %d\n",row,col);
            }
        } 
    } 
    
} 

bool search2D(char tab[R][C], int row,  int col, char word[]){ 
    if (tab[row][col] != word[0]){
        return false;
    } 
  
    int len = strlen(word);
  
    // Search word in all 8 directions 
    // starting from (row, col) 
    for (int dir = 0; dir < 8; dir++) { 
        // Initialize starting point 
        // for current direction 
        int k, rd = row + x[dir], cd = col + y[dir]; 
  
        // First character is already checked, 
        // match remaining characters 
        for (k = 1; k < len; k++) { 
            // If out of bound break 
            if (rd >= R || rd < 0 || cd >= C || cd < 0) 
                break; 
  
            // If not matched,  break 
            if (tab[rd][cd] != word[k]) 
                break; 
  
            // Moving in particular direction 
            rd += x[dir], cd += y[dir]; 
        } 
  
        // If all character matched, then value of must 
        // be equal to length of word 
        if (k == len){
            return true;
        }
    } 
    return false; 
} 
  

// source: https://www.geeksforgeeks.org/search-a-word-in-a-2d-grid-of-characters/