# include <stdio.h> 
  
void reverse(char *str);

int main() 
{ 
    char str[100]; 
    printf("Podaj napis: "); 
    fgets(str,100,stdin); 

    printf("Rewers: ");
    reverse(str); 

    printf("\n");
    return 0; 
} 

void reverse(char *str)
{ 
   if (*str) 
   { 
       reverse(str+1); 
       printf("%c", *str); 
   } 
} 