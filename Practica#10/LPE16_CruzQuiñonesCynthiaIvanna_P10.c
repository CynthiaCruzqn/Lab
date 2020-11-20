/* Actividad
Se requiere un programa para registrar a los candidatos para las
 vacantes disponibles en una empresa. El usuario va a capturar
 los datos solicitados y se almacenarÃ¯Â¿Â½n en una variable de tipo
 estructura. Se requiere el nombre, apellidos, edad, telÃ¯Â¿Â½fono,
 correo y puesto al que se estÃ¯Â¿Â½ postulando.

Utilizar un menÃ¯Â¿Â½ de opciones como el siguiente:
1.- Agregar nuevo candidato.
2.- Ver candidatos.
3.- Salir.

En la opciÃ¯Â¿Â½n de ver candidatos se van a imprimir todos los candidatos
 mostrando sus datos en orden: nombre completo, edad, telÃ¯Â¿Â½fono, correo
 y puesto al que se estÃ¯Â¿Â½ postulando el candidato. Utilizar un formato
 adecuado para visualizar los datos.
*/
// paginas 283 (8.2.2), 295 (8.2.3), 298 (8.2.4), 299 y 300

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

typedef struct{
        char nombre[30];
        char apellido[30];
        int edad;
        char telefono[15];
        char puesto[30];
        char correo[50];
} postulante;

void f_lectura(postulante *, int *);
void f_imp_post(postulante *, int TAM);
void f_imp_menu(void);

int main (){
      postulante ARRE[50];
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
                      case '2': f_imp_post (ARRE, TAM); break;
                      case '3': opcion = '3';           break;
              }
              
      } while (opcion != '3');
return 0;
}

void f_lectura(postulante A[], int *contador){

        printf("\nIngrese datos del postulante %d ", *contador + 1);
        printf("\nFavor de ingresar datos correctamente.\n");
        fflush(stdin);
        printf("\nIngrese el nombre: ");
        scanf("%s", A[*contador].nombre);
        fflush(stdin);
        printf("\nIngrese el apellido: ");
        scanf("%s", A[*contador].apellido);
        fflush(stdin);
        printf("\nIngrese la edad: ");
        scanf("%d", &A[*contador].edad);
        fflush(stdin);
        printf("\nIngrese el numero de telefono: ");
        scanf("%s", A[*contador].telefono);
        fflush(stdin);
        printf("\nIngrese el puesto: ");
        scanf("%s", A[*contador].puesto);
        fflush(stdin);
        printf("\nIngrese el correo electronico: ");
        scanf("%s", A[*contador].correo);
}

void f_imp_post(postulante A[], int TAM){
        int i;
        printf("\nLista de postulantes.\n\n");
        for (i = 0; i < TAM; i ++){
                printf("Postulante %d\n", i + 1);
                printf("Nombre completo es: %s %s.\n", A[i].nombre, A[i].apellido);
                printf("Edad: %d.\n", A[i].edad);
                printf("Telefono: %s.\n", A[i].telefono);
                printf("Correo electronico: %s.\n\n", A[i].correo);
                printf("Puesto al que se esta postulando: %s.\n\n", A[i].puesto);
        }

}

void f_imp_menu(void){
        printf("\n*****MENU DE OPCIONES*****\n\n");
        printf("\t1) Agregar nuevo postulante.\n");
        printf("\t2) Ver postulantes.\n");
        printf("\t3) Salir.\n\n");
}
