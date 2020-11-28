#include <stdio.h>
int main()
{
    unsigned char x = 10;
    unsigned char y = 12;
    
    printf("%u\n", x >> 1 | y << 2);
    printf("%u\n", x << 1 & y << 2);
    
    return 0;
}