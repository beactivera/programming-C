#include <stdio.h>
#include <stdbool.h>
 
struct STOS{
    int elementy[100];
    int ilosc_elementow;
};

void pop(struct STOS*);
void push(struct STOS*, int);
int top(struct STOS*);
bool isEmpty(struct STOS*);
int size(struct STOS*);
struct STOS create_stack();

int main(){
    struct STOS stack = create_stack();

    while(1) {
        printf("STEROWANIE STOSEM\nWybierz jedna z ponizszych opcji:\n  1 - pop\n  2 - push\n  3 - top\n  4 - isEmpty\n  5 - size\n");

        int cyfra;
        scanf("%d",&cyfra);

        if (cyfra >= 1 && cyfra <= 5){
            switch(cyfra) {
            case 1 : pop(&stack); break;
            case 2 : {
                int to_push;
                printf("Wartosc do wpisania: ");
                scanf("%d",&to_push);
                push(&stack, to_push); 
                break;
            } 
            case 3 : printf("%d\n", top(&stack)); break;
            case 4 : printf("%d\n", isEmpty(&stack)); break;
            case 5 : printf("%d\n", size(&stack)); break;
            }
        }
        else {
            printf("Nie ma takiej opcji. Ponownie podaj numer:");
            scanf("%d",&cyfra);
        }
    }    
}

// zdejmowac element ze stosu
void pop(struct STOS* stos){
    stos->ilosc_elementow--;
}

// wkladac element na stos
void push(struct STOS* stos, int element){
    stos->elementy[stos->ilosc_elementow] = element;
    stos->ilosc_elementow++;
}

// zwracac wartosc elementu ktory jest na topie
int top(struct STOS* stos){
    return stos->elementy[stos->ilosc_elementow-1];
}

// spr czy stos jest pusty
bool isEmpty(struct STOS* stos){
    return stos->ilosc_elementow == 0;
}

// liczba elementow w stosie
int size(struct STOS* stos){
    return stos->ilosc_elementow;
}

struct STOS create_stack() {
    struct STOS stack;
    stack.ilosc_elementow = 0;
    return stack;
}