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
#define p printf
#define s scanf
struct EAutomovil{
	char placa[10];
	char marca[50];
	int modelo;
	char color[50];
	int precio;
	struct Ecliente *ptr; 
}Automovil[tam];
struct Ecliente{
	char nombre[80];
	int telefono;
	int numero;
	struct EAutomovil *p;
}Cliente[tam];

int main(){
	int i=0, j, op, validacion,clientenum, espacio, totalClient, n=0, total;
	char Disponibilidad[50]={"DISPONIBLE"};
 
 do{
 	
 	p("1-Registrar auto.\n2-Ingresar cliente.\n3-Ver Vehiculos disponibles.\n4-Devolucion del Vehiculo.\n5-Mostrar vehiculos alquilados.\n6-Salir.\nOpcion: ");
 	s("%d", &op);
 	system("cls");
 	switch(op){
 		case 1:	i++;
		 		fflush(stdin);
		 		 p("Ingrese la placa del vehiculo: ");
 				gets(Automovil[i].placa);
 				fflush(stdin);
 				p("\nIngrese marca del vehiculo: ");
 				gets(Automovil[i].marca);
 				p("\nIngrese modelo del vehiculo: ");
 				s("%d", &Automovil[i].modelo);
 				fflush(stdin);
 				p("\nIngrese color del vehiculo: ");
 				gets(Automovil[i].color);
 				p("\nIngrese precio del vehiculo: ");
 				s("%d", &Automovil[i].precio);
 				fflush(stdin);
 				
				total=i;
 				
				system("cls");
 				break;
 		case 2: 
		 		fflush(stdin);
		 		p("Ingrese nombre del cliente: ");
 				gets(Cliente[n].nombre);
 				p("\nIngrese telefono del cliente: ");
				s("%d", &Cliente[n].telefono);
				p("\nIngrese numero de licencia: ");
				s("%d", &Cliente[n].numero);
				n++;
				n=totalClient;
 				system("cls");
				break;
		case 3: p("-------------------------------------Vehiculos disponibles-------------------------------------");
				for(i=1; i<=total; i++){
					if(Automovil[i].ptr==NULL){
					
						p("\nVeiculo %d", i);
						p("\nMarca del vehiculo: %s", Automovil[i].marca);
						p("\nModelo del vehiculo: %d", Automovil[i].modelo);
						p("\nColor del vehiculo: %s", Automovil[i].color);
						p("\nPlaca del vehiculo: %s", Automovil[i].placa);
						p("\nPrecio por el vehiculo: %d", Automovil[i].precio);
						}
				 }
					int a=0;
						p("\n%cDesea rentar un auto? Si(1) No(0)", 168);
						s("%d", &a);
						
						switch(a){
							case 1: 
								p("\nIngrese su numero de licencia: ");
								s("%d", &validacion);
								for(i=0; i<=totalClient; i++){
								if(validacion==Cliente[i].numero){
									
									i=clientenum;
									
									}
							}
								p("\nIngrese el vehiculo a elegir: ");
								s("%d", &espacio);
								Automovil[espacio].ptr = &Cliente[clientenum ];
								Cliente[clientenum].p = &Automovil[ espacio ];
								p("¡Auto Registrado con exito!");
								
							
							
						}
			system("cls");
				break;
		case 4:	p("Ingrese su numero de licencia: ");
				s("%d", &validacion);
				for(i=0; i<=total; i++){
					if(validacion==Cliente[i].numero){
						 
						i=clientenum;
					}
				}
				Automovil[espacio].ptr = NULL;
				Cliente[clientenum].p = NULL;
				p("¡Auto entregado con exito!");
				system("cls");
				break;
		case 5:
				for(i=1; i<=total; i++){
					if(Automovil[i].ptr!=NULL){
						p("\nVeiculo %d\t\tCliente", i);
						p("\nMarca del vehiculo: %s\t\tNombre: %s", Automovil[i].marca, Automovil[i].ptr->nombre);
						p("\nModelo del vehiculo: %d\t\tTelefono: %d", Automovil[i].modelo, Automovil[i].ptr->telefono);
						p("\nColor del vehiculo: %s\t\tNumero de licencia: %d", Automovil[i].color, Automovil[i].ptr->numero);
						p("\nPlaca del vehiculo: %s", Automovil[i].placa);
						p("\nPrecio por el vehiculo: %d\n", Automovil[i].precio);
					}
				 }
				system("pause");
				system("cls");
				 break;

			}
	 }while(op<6);			
	 p("Usted salio del programa");
 system("pause");
 return 0;
}
