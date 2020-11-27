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

typedef struct {
  char placa[20];
  char marca[20];
  char modelo[20];
  char color[10];
  char precio[8];
} automovil;

struct cliente{
  char nombre[50];
  char telefono[15];
  char NumLicencia[15];
  automovil datos;
};

void f_lectura(postulante *, int *);
void f_imp_post(postulante *, int TAM);
void f_imp_menu(void);

int main (){
      cliente ARRE[50];
      int TAM;
      char opcion = 'E';
      int contador;
      do {
              fflush(stdin);
              printf("\nIngrese numero de postulantes: ");
              scanf("%d", &TAM);
      } while (TAM > 50 || TAM < 1);

      do{
              f_imp_menu();
              fflush(stdin);
              printf("\nIngrese opcion del menu anterior: ");
              scanf("%c", &opcion);

              switch (opcion){
                      case '1': f_lectura (ARRE, &contador);
                                ++ contador;
                                                        break;
                      case '2': //f_imp_post (ARRE, TAM); break;
                      case '3': f_imp_cliente (ARRE, TAM); break;
                      case '4': opcion = '4';           break;
              }

      } while (opcion != '4');
return 0;
}

void f_lectura(cliente A[], int *contador){

        printf("\nIngrese datos del cliente %d ", *contador + 1);
        printf("\nFavor de ingresar datos correctamente.\n");
        fflush(stdin);
        printf("\nIngrese el nombre: ");
        scanf("%s", A[*contador].nombre);
        fflush(stdin);
        printf("\nIngrese el telefono: ");
        scanf("%s", A[*contador].telefono);
        fflush(stdin);
        printf("\nIngrese el numero de lisencia: ");
        scanf("%s", &A[*contador].NumLicencia);
        fflush(stdin);

        printf("\nIngrese los datos del automovil: \n");
        printf("\n\tPlaca: ");
        scanf("%s", A[*contador].placa);
        printf("\n\tMarca");
        scanf("%s", A[*contador].marca);
        printf("\n\tModelo: ");
        scanf("%s", A[*contador].modelo);
        printf("\n\tClor: ");
        scanf("%s", A[*contador].color);
        printf("\n\tPrecio: ");
        scanf("%s", A[*contador].precio);
}

void f_imp_post(cliente A[], int TAM){
        int i;
        printf("\nLista de clientes.\n\n");
        for (i = 0; i < TAM; i ++){
                printf("Cliente %d\n", i + 1);
                printf("Nombre: %s %s.\n", A[i].nombre);
                printf("Telefono: %s.\n", A[i].telefono);
                printf("Numero de lisencia: %s.\n\n", A[i].NumLicencia);
        }

}

void f_imp_menu(void){
        printf("\n*****MENU DE OPCIONES*****\n\n");
        printf("\t1) Registrar datos del vehiculo.\n");
        printf("\t2) Registrar datos de cliente.\n");
        printf("\t3) Ver autos disponibles.\n");
        printf("\t4) Salir.\n\n");
}
