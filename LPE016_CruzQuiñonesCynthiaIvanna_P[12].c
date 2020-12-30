/* Actividad
Para la gestion de renta de automoviles se tienen los datos de los
autos que se pueden alquilar y de los clientes. Realizar un programa
que cree dos arreglos de estructuras, uno para los automoviles y otro
para los clientes con todos sus datos. La estructura de cada auto
tendra un puntero a la estructura del cliente que lo ha alquilado.
Tambien al reves, cada cliente tendra un puntero al automovil que
tiene alquilado.

El programa debera:
- Contar con un menu para que el usuario pueda registrar los datos de
  los vehiculos y de los clientes, asi mismo tendra una opcion para
  mostrar los autos disponibles para que un cliente lo pueda alquilar
  y un opcion para realizar la devolucion de un vehiculo, colocando
  los punteros de forma que apunten a los registros correspondientes.
- Se utilizara el numero de licencia de un cliente para realizar el
  alquiler.
- Si el auto ya ha sido alquilado debera mostrarse un mensaje.
- Tambien se podra consultar los autos alquilados y los datos del
  cliente que lo alquilo.
- Datos necesarios para registrar un automovil: placa, marca, modero,
  color y precio.
- Datos necesarios para registrar un cliente: nombre, telefono, numero
  de licencia.
*/

#include <stdio.h>
#include <string.h>

#define tam 1000

struct Automovil{
	char placa[10];
	char marca[50];
	int modelo;
	char color[50];
	int precio;
	struct Cliente *ptr;
}Automovil[tam];

struct Cliente{
	char nombre[80];
	int telefono;
	int numero;
	struct Automovil *p;
}Cliente[tam];

int main(){
	int i=0, j;
	int opcion;
	int comprobant, cantidad_clientes;
	int espacio, Total_Clientes;
	int n=0, total;
	char Disponibilidad[50]={"DISPONIBLE"};

 do{

	 printf("\n\t*****MENU DE OPCIONES*****\n\n");
	 printf("\n\t1) Registrar automovil.");
	 printf("\n\t2) Ingresar cliente.");
	 printf("\n\t3) Vehiculos disponibles.");
	 printf("\n\t4) Devolucion del vehiculo.");
	 printf("\n\t5) Mostrar autos alquilados.");
	 printf("\n\t6) Salir.\n");

	 printf("\nIngrese su opcion: ");
	 scanf("%d", &opcion);


 	switch(opcion){
 		case 1:	i++;
		 		fflush(stdin);
		 		printf("Ingrese la placa del vehiculo: ");
 				gets(Automovil[i].placa);
 				fflush(stdin);
 				printf("\nIngrese marca del vehiculo: ");
 				gets(Automovil[i].marca);
 				printf("\nIngrese modelo del vehiculo: ");
 				scanf("%d", &Automovil[i].modelo);
 				fflush(stdin);
 				printf("\nIngrese color del vehiculo: ");
 				gets(Automovil[i].color);
 				printf("\nIngrese precio del vehiculo: ");
 				scanf("%d", &Automovil[i].precio);
 				fflush(stdin);
 				total=i;

 				break;
 		case 2:
		 		fflush(stdin);
		 		printf("\nIngrese nombre del cliente: ");
 				gets(Cliente[n].nombre);
 				printf("\nIngrese telefono del cliente [SIN LADA]: ");
				scanf("%d", &Cliente[n].telefono);
				printf("\nIngrese numero de licencia: ");
				scanf("%d", &Cliente[n].numero);
				n++;
				n=Total_Clientes;

				break;
		case 3:
		printf("\n\t***Los autos DISPONIBLES son***");
				for(i=1; i<=total; i++){
					if(Automovil[i].ptr==NULL){

						printf("\n\t   Auto disponible numero %d\n", i);
						printf("\nMarca del vehiculo: %s", Automovil[i].marca);
						printf("\nModelo del vehiculo: %d", Automovil[i].modelo);
						printf("\nColor del vehiculo: %s", Automovil[i].color);
						printf("\nPlaca del vehiculo: %s", Automovil[i].placa);
						printf("\nPrecio por el vehiculo: %d", Automovil[i].precio);
						}
				 }
					int a=0;
						printf("\n\n%cDesea rentar un auto? [Favor de usar '1' para SI y '0' para NO]", 168);
						scanf("%d", &a);

						switch(a){
							case 1:
								printf("\nIngrese su numero de licencia: ");
								scanf("%d", &comprobant);
								for(i=0; i<=Total_Clientes; i++){
								if(comprobant==Cliente[i].numero){

									i= cantidad_clientes;

									}
							}
								printf("\nIngrese el vehiculo a elegir: ");
								scanf("%d", &espacio);
								Automovil[espacio].ptr = &Cliente[ cantidad_clientes ];
								Cliente[ cantidad_clientes].p = &Automovil[ espacio ];
								//printf("%cAuto Registrado con exito!", 173);



						}
						printf("%cAuto Registrado con exito!\n", 173);
						system("pause");
						system("cls");
				break;
		case 4:
		printf("Ingrese numero de licencia: ");
		scanf("%d", &comprobant);
				for(i=0; i<=total; i++){
					if(comprobant==Cliente[i].numero){

						i= cantidad_clientes;
					}
				}
				Automovil[espacio].ptr = NULL;
				Cliente[ cantidad_clientes].p = NULL;
				printf("\n\t\t%cAuto entregado con exito!", 173);

				system("cls");
				break;
		case 5:
				for(i=1; i<=total; i++){
					if(Automovil[i].ptr!=NULL){
						printf("\n\t***Lista de autos ALQUILADOS***\n");
						printf("\nVeiculo %d", i);
						printf("\nMarca del vehiculo: %s", Automovil[i].marca);
						printf("\nModelo del vehiculo: %d", Automovil[i].modelo);
						printf("\nColor del vehiculo: %s", Automovil[i].color);
						printf("\nPlaca del vehiculo: %s", Automovil[i].placa);
						printf("\nPrecio por el vehiculo: %d", Automovil[i].precio);
						printf("\n\t**********Alquilado por:**********\n");
						printf("\nCliente %d", i);
						printf("\nNombre: %s", Automovil[i].ptr->nombre);
						printf("\nTelefono: %d", Automovil[i].ptr->telefono);
						printf("\nNumero de licencia: %d", Automovil[i].ptr->numero);
					}
				 }
				system("pause");

				 break;

			}
	 }while(opcion < 6);
	 printf("A seleccionado salir del programa\n");


 system("pause");
 return 0;
}
