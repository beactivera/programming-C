#ifndef BIBKOLEJKA1_H
#define BIBKOLEJKA1_H
#include<stdbool.h>
typedef struct
{
    int x;
    int y;
} Point;

typedef struct elemkol
{
   Point point;
   struct elemkol* nast;
} TElemKol;

typedef struct
{
   TElemKol* pierwszy;
   TElemKol* ostatni;
} TKolejka;

void init(TKolejka*);
bool isEmpty(TKolejka*);
bool enqueue(TKolejka*, int, int);
Point dequeue(TKolejka*);
void show(TKolejka*);
void remove_second_element(TKolejka*);

#endif