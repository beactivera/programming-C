#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int main() {

	FILE* input = fopen("cyfry.txt","r");
	
	
	int suma =0;
    int liczba;
	while(fscanf(input, "%d", &liczba) == 1) {
		suma += liczba;
	}

	printf("%d\n",suma);

   	fclose(input);
	return 0;
}
