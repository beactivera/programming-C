#include <stdio.h>
void main(void)
{
    int x = 10, y, *wsk_x, *w2;
    wsk_x = &x;
    w2 = wsk_x;
    printf("wsk: \t%p\t%d\n",wsk_x, *wsk_x);
    printf("x: \t%p\t%d\n", &x,x);
    *wsk_x = 15;
    y = x;
    printf("x: \t%p\t%d\n", &x,x);
    printf("y: \t%p\t%d\n", &y,y);
    *wsk_x += 10;
    printf("x: \t%p\t%d\n", &x,x);
    ++*wsk_x;
    printf("wsk: \t%p\t%d\n",wsk_x, *wsk_x);
    (*wsk_x)++;
    printf("wsk: \t%p\t%d\n",wsk_x, *wsk_x);
    *wsk_x++;
    printf("x: \t%p\t%d\n",wsk_x, *wsk_x);
    printf("w2: \t%p\t%d\n",w2, *w2);
}