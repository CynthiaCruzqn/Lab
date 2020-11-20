/* Actividad #1
Crear una matriz bidimensional para ingresar las 10 calificaciones de 3 materias
diferentes y determinar lo siguiente:
- Obtener el promedio de las 10 calificaciones de cada materia.
- Obtener el promedio general de las 3 materias.  */

#include<stdio.h>
#include<conio.h>

int main (){

	int i, j, Suma=0;
	float Matriz[11][3], PromedioMateria, PromedioGeneral;
	Matriz[10][0] = 0, Matriz[10][1] = 0, Matriz[10][2] = 0;

	for(i=0; i<10; i++){
		printf("\n\n***Ingrese las calificaciones del alumno %i***\n\n", i+1);
		for(j=0; j<3; j++){
			printf("Ingrese la calificacion %d del alumno %d: ", j+1, i+1);
			scanf("%f", &Matriz[i][j]);
			Matriz[10][j] += Matriz[i][j];
			Suma += Matriz[i][j];
		}

	}
	printf("\nLa matriz de las calificaciones es:\n\n");
	for(i=0; i<10; i++){
		for(j=0; j<3; j++) {
			printf("\t%.2f", Matriz[i][j]);
		}
		printf("\n");
	}

	printf("\nEl promedio de la materia 1 es:  %.2f\n", Matriz[10][0] / 10);
	printf("\nEl promedio de la materia 2 es:  %.2f\n", Matriz[10][1] / 10);
	printf("\nEl promedio de la materia 3 es:  %.2f\n", Matriz[10][2] / 10);

	PromedioGeneral = (float)Suma / 30;
	printf("\n\nEl promedio general de las tres materias es: %.2f\n", PromedioGeneral);


    system("PAUSE");
	return 0;
}
