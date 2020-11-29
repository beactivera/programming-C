#include <stdio.h>

int inc(int*);

int main(){
    
    int x = 5;
    inc(&x);
    printf("%d\n",x);

    return 0;
}

int inc(int *p){
    return (*p)++;
}