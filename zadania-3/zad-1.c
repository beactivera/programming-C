#include <stdio.h>

int main()
{
    int i;
    i=0;

    while (i!=1000)
    {
      i=i+1;
    //   printf("% d", i);

      if(i%5==0 && i%7==4)
      {
          printf("% d", i);
      }
    }

  return 0;
}