#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {

	FILE* input = fopen("stosy.txt","r");
	FILE* output = fopen("stosy-binarnie.bin","wb");
	
	int number;
	while(fscanf(input, "%d ", &number) == 1) {
		printf("%d ", number);
		fwrite(&number, sizeof(number), 1, output);
	}
	printf("\n");

   	fclose(input);
	fclose(output);
	return 0;
}
