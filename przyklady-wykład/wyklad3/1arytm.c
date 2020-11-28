#include <stdio.h>
 
int main()
{
    int x = 10;
    printf("x = %d\n", x++);
    printf("x = %d\n", ++x);
    int y;
    x = 1;
    y = ++x + ++x;
    printf("x = %d, y = %d\n", x, y);
    x = 1;
    y = x++ + ++x;
    printf("x = %d, y = %d\n", x, y);
    x = 1;
    y = x++ + x++;
    printf("x = %d, y = %d\n", x, y);
 
    x = 1;
    y = x++ + x++ + x++ + x++ + x++;
    printf("x = %d, y= %d\n", x, y);
 
    x = 1;
    y = ++x + ++x + ++x + ++x + ++x;
    printf("x = %d, y= %d\n", x, y);
    return 0;
}