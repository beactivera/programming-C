#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
 
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
void saveToFile(FILE*, struct STOS*);
void getFromFile(FILE*);

int main(){
    struct STOS stack = create_stack();
    FILE *plik;

    while(1) {
        printf("---------------------------------------------------------\n");
        printf("STEROWANIE STOSEM\nWybierz jedna z ponizszych opcji:\n  1 - pop\n  2 - push\n  3 - top\n  4 - isEmpty\n  5 - size\n  6 - zapis do pliku tekstowego\n  7 - odczyt z pliku tesktowego\n");
        printf("---------------------------------------------------------\n");
        int cyfra;
        scanf("%d",&cyfra);

        if (cyfra >= 1 && cyfra <= 7){
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
            case 6 : saveToFile(plik, &stack); break;
            case 7 : getFromFile(plik); break;
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
    FILE* input = fopen("stosy.txt","r");
    int number;
    while(fscanf(input, "%d ", &number) == 1) {
        printf("NUMEREK: %d", number);
		push(&stack, number);
	}
    fclose(input);
    return stack;
}

void saveToFile(FILE* plik, struct STOS* stos){
    plik = fopen("stosy.txt","w");
    int ilosc = stos->ilosc_elementow;
    for(int i=0; i<ilosc; i++){
        fprintf(plik,"%d ", stos->elementy[i]);
    }
   fclose (plik);
}

void getFromFile(FILE* plik){
    plik = fopen("stosy.txt", "r");
    int number;
    while(fscanf(plik, "%d ", &number) == 1) {
        printf("%d ", number);
    }
    printf("\n");
    fclose (plik);
}
