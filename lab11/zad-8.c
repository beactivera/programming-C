#include <stdio.h>
#include <stdbool.h>

struct STOS{
    int elementy[100];
};

int pop(struct STOS stos);
int push(struct STOS stos, int element);
int top(struct STOS stos);
bool isEmpty(struct STOS stos);
int size(struct STOS stos);

int main(){

}

// zdejmowac element ze stosu
int pop(struct STOS stos){

}

// wkladac element na stos
int push(struct STOS stos, int element){
    stos.elementy.append(element);
}

// zwracac wartosc elementu ktory jest na topie
int top(struct STOS stos){

}

// spr czy stos jest pusty
bool isEmpty(struct STOS stos){
    if(sizeof(stos)!=0){
        return true;
    }
    else{
        return false;
    }
}

// liczba elementow w stosie
int size(struct STOS stos){
    int len = sizeof(stos);
    int licznik;
    for(int i=0; i<len, i++){
        licznik++;
    }
}