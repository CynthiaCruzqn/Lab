/* Actividad #1
El siguiente programa permite encontrar un elemento en un
arreglo de 10 n�meros, en el mismo tambi�n se valida que el
n�mero ingresado sea correcto, es decir, que no sea un n�mero
negativo, en caso de que as� sea se deber� volver a pedir el
n�mero y rellenar el arreglo.
Se deber� crear un men� de opciones en las que exista la opci�n
de agregar elementos en el arreglo y buscar el elemento en el
arreglo, para finalmente tener la opci�n de salir del men� de opciones.

Se utilizar� las sentencias Switch y Do While, utilizadas en las
pr�cticas anteriores. */


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main (){
	int arreglo[10];
	int contador_1 = 0, contador_2, contador_3, busqueda_variable, contador_varibales_encontradas;
	char Opciones = 'a', opcion_1 = 's', opcion_2 = 's';

	do {
		printf("Ingrese un numero entero positivo\n");
		scanf("%d", &arreglo[contador_1]);
		system("cls");

		if (arreglo[contador_1] >= 0) {
			contador_1 = contador_1 +1;

		}else{
			printf("Ingrese un numero valido\n");
			system("PAUSE");
			system("cls");
		}

	} while(contador_1 < 10);

	do {
		system("cls");
		printf("Menu de opciones para el arreglo\n\n");
		printf("Opciones:\n\n");
		printf("\n\n\tA)  Buscar un elemento al arreglo\n\n");
		printf("\n\n\tB)  Modificar el valor de un elemento del arreglo\n\n");
		printf("\n\n\tC)  Salir\n\n");
		printf("\n\nIngrese la opcion deseada:");
		scanf("%c", &Opciones);_flushall();

		Opciones = toupper(Opciones);
		system("cls");
		switch (Opciones) {

			case 'A': do {
				printf("\nIngrese numero entero positivo a buscar\n");
				scanf("%d", &busqueda_variable);
				contador_2 = 0;
				contador_varibales_encontradas = 0;

				do {
					if (busqueda_variable == arreglo[contador_2]) {
						printf("El numero buscado %d es igual al elemento %d del arreglo\n", busqueda_variable, contador_2+1);
						 _flushall();
						 contador_2 = contador_2 + 1;
						 contador_varibales_encontradas = contador_varibales_encontradas+1;

					} else{
						contador_2 = contador_2 + 1;
						if (contador_2 == 10 && contador_varibales_encontradas < 1) {
							printf("El numero ingresado no no es igual a algun elemento del arreglo\n", busqueda_variable);
							_flushall();
							contador_2 = contador_2 + 1;
						}
					}

				} while(contador_2 < 10);

				printf("Escriba si, si es que quiere seguir buscando o no, para regresar al menu anterior\n");
				scanf("%c", &opcion_1); _flushall(); system("PAUSE");
				opcion_1 = tolower(opcion_1);

			} while(opcion_1 == 's');
			break;
			case 'B': do {
				system("cls");
				printf("Ingrese numero de casilla que quiere modificar del arreglo\n");
				scanf("%d", &contador_3);
				_flushall();
				if (0 < contador_3 < 11) {
					system("cls");
					printf("Ingrese el numero a ingresar en la casilla\n",contador_2);
					scanf("%d", &arreglo[contador_3 - 1]);
					_flushall();
					printf("\n");
					printf("Escriba si, si es que quiere seguir modificando o no, para regresar al menu anterior\n");
					scanf("%c", &opcion_2); _flushall(); system("PAUSE");
					opcion_2 = tolower(opcion_2);
				}
				else{
					printf("Ingrese un numero valido\n");
				}
			} while(opcion_2 == 's');
			break;
			case 'C': Opciones = 's';
			break;
		}
	} while(Opciones != 's');
	printf("El arreglo es el siguiente:\n");
	for (contador_1 = 0; contador_1 < 10; contador_1++) {
		printf("Elemento %d: \t%d\n", contador_1 + 1, arreglo[contador_1]);
	}

return 0;
}
