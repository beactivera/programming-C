#include <stdio.h>

int main()
{
   for(int i = 9;i >= 0; i--){
     
        for(int j = 9; j > i; j--){
            
            for(int k = 9; k > j; k--){
                
                printf("%d%d%d ",k,j,i);
            }
        }
    }

    return 0;
} 