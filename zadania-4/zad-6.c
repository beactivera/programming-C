 #include <stdio.h>


int main()
{
    int n = 0;
    for(int i=2; i<=1000; i++){

       if(n == 2){
        printf("%d, ", i-1);
       }

       n = 0;
       for(int j=1; j<=i; j++){
           if(i%j==0){
               n++;  
           }
       } 
       
   }
    return 0;
}
