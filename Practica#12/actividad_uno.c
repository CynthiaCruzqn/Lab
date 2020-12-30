/*
Para  la  gestión  de  renta  de  automóviles  se  tienen  los  datos  de  los  
autos  que  se  pueden  alquilar  y  de  los clientes.  
Realizar  un  programa  que  cree  dos  arreglos  de  estructuras,
uno  para  los  automóviles  y  otro  para  los clientes  con  todos  sus  datos.
La  estructura  de  cada  auto  tendrá  un  puntero  a  la  estructura  del  
cliente  que  lo ha  alquilado.  También  al  revés,  cada cliente  tendrá un  
puntero al  automóvil  que  tiene alquilado.
El  programa deberá:
  Contar  con  un  menú  para que  el  usuario pueda  
registrar  los datos de  los  vehículos  y  de  los clientes, así  mismo  
tendrá  una  opción  para  mostrar  los  autos  disponibles  para  que  un  
cliente  lo  pueda  alquilar y  un  opción  para  realizar  la  devolución  
de  un  vehículo,  colocando  los  punteros  de  forma  que  apunten a los  
registros  correspondientes.   
  Se utilizará  el  número  de  licencia de  un  cliente para realizar  el  alquiler.   
  Si el auto ya ha  sido  alquilado deberá  mostrarse  un  mensaje. 
  También  se podrá  consultar  los  autos  alquilados  y  los datos del  
cliente  que lo  alquiló. 
  Datos  necesarios  para  registrar  un  automóvil:  placa,  marca,  modero,  
color  y  precio.   Datos  necesarios para  registrar  un  cliente:  nombre,  
teléfono  y  número de  licencia.

Menu

1. Reguistrar automovil (Placa, marca, modelo,color y precio)
2. Mostrar autos disponibles (Mostrar cuando uno ya esta alquilado)
3. Devolucion de un vehiculo
4. Mostrar Autos alquilados (Mostrar los datos del cliente que los alquilo)
5. Salir 
*/

#include <stdio.h>
#include <string.h>

struct Automoviles{
	char placa[20];
	char marca[20];
	char modelo[20];
	char color[20];
	char precio[20];
	char alquilado[20];
};

struct Clientes{
	char nombre[50];
	char telefono[50];
	char licencia[50];
	char auto_alquilado[20];

};

void agregar_autos(int count,struct Automoviles punter[]){
	fflush(stdin);
	printf("\nIngrese la placa del automovil : ");
	scanf("%s",&punter[count].placa);
	printf("\nIngrese la marca : ");
	scanf("%s",&punter[count].marca);
	//punter[count].marca = mar;
	printf("\nIngrese el modelo: ");
	scanf("%s",&punter[count].modelo);
	//punter->modelo = mod;
	printf("\nIngrese el color : ");
	scanf("%s",&punter[count].color);
	//punter->color = c;
	printf("\nIngrese el precio : ");
	scanf("%s",&punter[count].precio);
	//punter->precio = pre;
	strcpy(punter[count].alquilado, "Disponible");//'D','i','s','p','o','n','i','b','l','e');
	fflush(stdin);
}

void mostrar_autos(int count_cliente, struct Clientes punt_cliente[], int count, struct Automoviles punt_busqueda[]){
	fflush(stdin);
	int count_busqueda;
	int i = 0;
	//printf("%s",respuesta_alquiler);
	printf("\t\t+------------------------------------------------------------------+\t\t\n");
	printf("	\t\t\t\t	Mostrar Autos\n");
	printf("\t\t+------------------------------------------------------------------+\t\t\n");
	for (i = 1; i <= count; i++){
		printf("|%s|",punt_busqueda[i].placa);
		printf("|%s|",punt_cliente[count_cliente].auto_alquilado);
		if(punt_cliente[count_cliente].auto_alquilado == punt_busqueda[i].placa){
			printf("Entro al if\n");
			printf("	\t\t	%s %s\t 	Estado: %s\n",punt_busqueda[i].marca, punt_busqueda[i].modelo,punt_busqueda[i].alquilado);
			printf("	\t\t	Placas: %s Color: %s\n",punt_busqueda[i].placa, punt_busqueda[i].color);
			printf("	\t\t	Precio: $%s pesos \n",punt_busqueda[i].precio);
			printf("\t\t+------------------------------------------------------------------+\t\t\n");
		}else{
			printf("No entro al if\n");
			strcpy(punt_busqueda[i].alquilado, "Alquilado"); 
			printf("	\t\t	%s %s\t 	Estado: %s\n",punt_busqueda[i].marca, punt_busqueda[i].modelo,punt_busqueda[i].alquilado);
			printf("	\t\t	Placas: %s Color: %s\n",punt_busqueda[i].placa, punt_busqueda[i].color);
			printf("	\t\t	Precio: $%s pesos \n",punt_busqueda[i].precio);
			printf("\t\t+------------------------------------------------------------------+\t\t\n");
		}
	}
}

void alquilar_vehiculo(int count, int count_cliente, struct Clientes punt_cliente[], struct Automoviles punt_alquiler[]){
	fflush(stdin);
	char nombre1[15];
	char apellido1[15];
	char apellido2[15];
	int i = 0;
	//Ingresa los datos del comprador
	printf("	\t\t\t\t	Alquilar\n");
	printf("	\t\t	Ingrese el noombre del cliente: ");
	scanf("%s", &nombre1);
	strcpy(punt_cliente[count_cliente].nombre, nombre1);
	scanf("%s", &apellido1);
	strcat(punt_cliente[count_cliente].nombre, apellido1);
	scanf("%s", &apellido2);
	strcat(punt_cliente[count_cliente].nombre, apellido2);
	printf("\n	\t\t	Ingrese el telefono del cliente: ");
	scanf("%s", &punt_cliente[count_cliente].telefono);
	printf("\n	\t\t	Ingrese la Licencia del cliente: ");
	scanf("%s", &punt_cliente[count_cliente].licencia);
	printf("%s",punt_cliente[count_cliente].nombre);
	//Pide que auto desea alquilar
	printf("\n	\t\t	Cual auto desearia alquilär?\n ");
	printf("\n	\t\t	Opciones:\n");
		for (i = 1; i <= count; i++){
		//if(punt_alquiler[i].alquilado == "Disponible" ){ 		
			printf("	\t\t	%s %s\t 	Estado: %s\n",punt_alquiler[i].marca, punt_alquiler[i].modelo,punt_alquiler[i].alquilado);
			printf("	\t\t	Placas: %s \n",punt_alquiler[i].placa);
			printf("\t\t+------------------------------------------------------------------+\t\t\n");
	}
}

int main(){

	int i = 0, j = 0;
	int count = 0;
	int count_cliente = 0;
	//int bandera;
	int eleccion;
	char *punt_autos;
	char *punt_clientes;
	char *punt_relacion; //Indicara la relaccion Carro - Cliente
	char respuesta_alquiler[20];

	printf("	\t\t\t\t	Bienvenido\n");

	struct Automoviles Automoviles[50];
	struct Clientes Clientes[50];

	do{
		//Comienza el menu
		printf("\t\t+------------------------------------------------------------------+\t\t\n");
		printf("\t\t|			1. Registrar automovil\t\t  	   |\n");
		printf("\t\t|			2. Mostrar Autos disponiblñes\t\t   |\n");
		printf("\t\t|			3. Alquilar vehiculos\t\t           |\n");
		printf("\t\t|			4. Devolucion del vehiculo \t	   |\n");
		printf("\t\t|			5. Mostrar Autos Alquilados\t\t   |\n");
		printf("\t\t|			6. Salir\t\t		   |\n");
		printf("\t\t+------------------------------------------------------------------+\t\t\n");
		scanf("%d", &eleccion);
//---------------------------------------------------------------------------------------------		
		switch(eleccion){
			case 1:	count = count + 1;
					agregar_autos(count, Automoviles);
					break;
			case 2:	
					mostrar_autos(count_cliente, Clientes,count, Automoviles);
					break;
			case 3: count_cliente = count_cliente + 1;
					alquilar_vehiculo(count, count_cliente, Clientes , Automoviles);
					printf("R= ");
					scanf("%s",&respuesta_alquiler);
					strcpy(Clientes[count_cliente].auto_alquilado, respuesta_alquiler);
					//printf("%s",respuesta_alquiler);
					break;
			case 4:
					break;
			case 5:
					break;
			case 6:
					i = 1;
					break;
			default:
					printf("\nPor favor, seleccione una opcion correcta\n");
					break;
		}

	}while(i == 0);

	system("pause");
	return 0;
}
