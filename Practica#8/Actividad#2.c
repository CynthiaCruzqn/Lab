/* Actividad #2
En base al programa de la Actividad 1, desarrollar uno nuevo para ordenar la
matriz bidimensional de 10 x 3, de mayor a menor, es decir, se deberá ordenar
las calificaciones de cada materia, respetando la calificación más alta en la
posición 1 y la más baja en la posición 10, esto para cada materia. 	*/


	#include<stdio.h>
	#include<conio.h>

	int main (){
		
		
	    int  x, y;
	    float MatrizOrdenada[10][3], Matrix[10][3], mayor=0;
	


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


	for (i=1; i<11; i++)
	{
		for (j=1; j<4; j++)
		{
			for (x=1; x<11; x++)
			{
				for (y=1; y<4; y++)
				{
					if (Matriz[i][j]>Matrix[x][y])
					{
						mayor=Matriz[i][j];
						Matriz[i][j]=Matrix[x][y];
						Matrix[x][y]=mayor;
					}
				}
			}
		}
	}
	printf("\nLas calificaciones ordenadas son:\n");
	for (y=1; y<11; y++)
	{
		
		for (x=1; x<4; x++)
		{
			printf("\t%.2f", Matrix[x][y]);
		}
		printf("\n");
	}
		


	    system("PAUSE");
		return 0;
	}
