#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 67
#define FIELD_LENGTH 30

typedef struct{
    char body[FIELD_LENGTH];
    char radius[FIELD_LENGTH];
    char volume[FIELD_LENGTH];
    char mass[FIELD_LENGTH];
    char density[FIELD_LENGTH];
    char surface[FIELD_LENGTH] ;
    char type_of_object[FIELD_LENGTH];
    char shape[FIELD_LENGTH];
}Planeta;

void read_planets(Planeta*);
void print_planets(Planeta[]);

int main()
{
    Planeta planets[MAX_LENGTH];
    read_planets(planets);
    // print_planets(planets);
    int number_of_unknown_shape_planets = 0;
    float total_volume = 0;
    for(int i=0; i<MAX_LENGTH; i++) {
        if(strcmp(planets[i].shape, "unknown")==0) {
            number_of_unknown_shape_planets++;
            total_volume += atof(planets[i].volume);
        }
    }
    float result = total_volume/number_of_unknown_shape_planets;
    printf("RESULT: %f\n", result);
   return 0;
}


void read_planets(Planeta* planets){
    FILE *plik = fopen("12_solar.txt", "r");
    for(int i=0; i<MAX_LENGTH; i++) {
        fscanf(plik, "%s%s%s%s%s%s%s%s", (planets+i)->body, (planets+i)->radius, (planets+i)->volume, (planets+i)->mass, (planets+i)->density, (planets+i)->surface, (planets+i)->type_of_object, (planets+i)->shape);
    }
    fclose(plik);
}

void print_planets(Planeta *planets){
    for(int i=0; i<MAX_LENGTH; i++){
        printf("Name = %s\nRadius = %s\nVolume = %s\nMass = %s\nDensity = %s\nSurface = %s\nType_of_object = %s\nShape = %s\n\n",
        planets[i].body, planets[i].radius, planets[i].volume, planets[i].mass, planets[i].density, planets[i].surface, planets[i].type_of_object, planets[i].shape);
    }
}
