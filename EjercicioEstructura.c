#include <stdio.h>
struct al
{
    char nombre[20];
    char direccion[20];
    char carrera[20];
    int edad;
    float promedio[20];
} al[30];
int main()
{
    int can;
    printf("ingrese la cantidad de alumnos ");
    scanf("%d", &can);
    int i;
    for (i = 0; i < can; i++)
        
    {
        fflush(stdin);
        printf("\n Alumno [%i] - Ingese el nombre del alumno ", i);
        scanf("%c",al[i].nombre); 
        printf("\n Alumno [%i] - Ingese la direccion del alumno ", i);
       scanf("%c",al[i].direccion);
        printf("\n Alumno [%i] - Ingese la carrera del alumno ", i);
       scanf("%c",al[i].carrera);
        printf("\n Alumno [%i] - Ingese la edad del alumno ", i);
        scanf("%d", al[i].edad);
        printf("\n Alumno [%i] - Ingese el promedio del alumno ", i);
        scanf("%f", al[i].promedio);
    }
    for (i = 0; i < can; i++)
    {

        printf("\n Al[%i]-Nombre: %c - Edad: %i -Direccion: %s -Carrera: %c -Promedio: %f ", i, al[i].nombre, al[i].edad, al[i].direccion, al[i].carrera, al[i].promedio);
    }
    return 0;
}