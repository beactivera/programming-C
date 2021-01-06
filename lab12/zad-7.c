#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int main() {

	FILE* input = fopen("literki.txt","r");
	FILE* output = fopen("literki2.txt","a");
	
	char litera[20];
	while(fscanf(input, "%s", litera) == 1) {
		// printf("%s ", litera);
		fprintf(output, "%s ", litera);
	}
	printf("\n");

   	fclose(input);
	fclose(output);
	return 0;
}
