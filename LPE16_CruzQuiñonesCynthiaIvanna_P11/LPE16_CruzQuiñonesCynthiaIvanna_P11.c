 /*  Actividad
Desarrollar el siguiente programa.
Crear un programa para ayudar a los estudiantes de primaria a practicar las
operaciones elementales. El estudiante tendra un menu para elegir el tipo
de operacion que desea practicar.
Utilizar un menu de opciones como el siguiente:
1. Suma.
2. Resta.
3. Multiplicacion.
4. Division.
5. Salir
Utilizar funciones de C para generar numeros positivos aleatorios entre un
rango de 1 a 100. Dependiendo el tipo de operacion elegida, debe de mostrar
una pregunta como esta:
¿Cuanto es 13 + 28?
Entonces, el estudiante escribe la respuesta. El programa verifica la
respuesta. Si es correcta, imprimir el mensaje ¡¡Muy bien!! y preguntar
si quiere seguir practicando o quiere regresar al menu. Si la pregunta
es incorrecta, imprimir ¡No. Por favor intenta de nuevo!, lo que permite
al estudiante intentar la misma pregunta de manera repetida hasta que
finalmente la conteste correctamente.
pag 152
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu(void){
  printf("\n %cHola! ", 173);
  printf("\n\n\t**Menu de opciones**\n");
  printf("\t1) Suma.\n");
  printf("\t2) Resta.\n");
  printf("\t3) Multiplicacion.\n");
  printf("\t4) Division.\n");
  printf("\t5) Salir.\n\n");
  fflush(stdin);

}

int funcion_suma(int valor1, int valor2){
  return valor1 + valor2;
}

int funcion_resta(int valor1, int valor2){
  return valor1 - valor2;
}

int funcion_multiplicacion(int valor1, int valor2){
  return valor1 * valor2;
}

int funcion_division(int valor1, int valor2){
  return valor1 / valor2;
}

int funcion_result(int valor1, int valor2){
  if (valor1 == valor2) {
    printf("\n %c%cMuy Bien!! \n", 173, 173);
  }else{
    printf("\n%cNo. Por favor intenta de nuevo!\n", 173);
  }
}

int main(){
  int variable1 = 0, variable2 = 0, result = 0;
  int respuesta = 0;
  char opcion = '>';
  char siono;

srand(time(NULL));
  do{
    menu();
    printf("\nIngresa la operacion que desees practicar hoy: ");
    scanf("%c", &opcion);
    switch (opcion){

            case '1':do{
                      variable1=1+rand()%(100-1+1);
                      variable2=1+rand()%(100-1+1);
                      result = funcion_suma(variable1, variable2);
                    do{
                    printf("\n%cCuanto es %d + %d?", 168, variable1, variable2);
                      printf("\nIngresa tu respuesta: ");
                      scanf("%d", &respuesta);

                      if(respuesta==funcion_suma(variable1, variable2))
        				      {
        				   	    printf("\n%cDesea seguir practicando o quiere regresar al menu?[ingrese s para si y n para no]: ", 168);
        						scanf(" %c",&siono);
                  } else{
                  	    funcion_result(respuesta, result);
                  }
                    }while(respuesta != result);
                  }while(siono=='s');
                      break;

            case '2': do{
                      variable1=1+rand()%(100-1+1);
                      variable2=1+rand()%(100-1+1);
                      result = funcion_resta(variable1, variable2);
                    do{
                    printf("\n%cCuanto es %d - %d?", 168, variable1, variable2);
                      printf("\nIngresa tu respuesta: ");
                      scanf("%d", &respuesta);

                      if(respuesta==funcion_resta(variable1, variable2))
        				      {
        				   	    printf("\n%cDesea seguir practicando o quiere regresar al menu?[ingrese s para si y n para no]: ", 168);
        						scanf(" %c",&siono);
                  } else{
                  	    funcion_result(respuesta, result);
                  }
                    }while(respuesta != result);
                  }while(siono=='s');
                      break;

            case '3': do{
                      variable1=1+rand()%(100-1+1);
                      variable2=1+rand()%(100-1+1);
                      result = funcion_multiplicacion(variable1, variable2);
                    do{
                    printf("\n%cCuanto es %d * %d?", 168, variable1, variable2);
                      printf("\nIngresa tu respuesta: ");
                      scanf("%d", &respuesta);

                      if(respuesta==funcion_multiplicacion(variable1, variable2))
        				      {
        				   	    printf("\n%cDesea seguir practicando o quiere regresar al menu?[ingrese s para si y n para no]: ", 168);
        						scanf(" %c",&siono);
                  } else{
                  	    funcion_result(respuesta, result);
                  }
                    }while(respuesta != result);
                  }while(siono=='s');
                      break;

            case '4': do{
                      variable1=1+rand()%(100-1+1);
                      variable2=1+rand()%(100-1+1);
                      result = funcion_division(variable1, variable2);
                    do{
                    printf("\n%cCuanto es %d / %d?", 168, variable1, variable2);
                      printf("\nIngresa tu respuesta: ");
                      scanf("%d", &respuesta);

                      if(respuesta==funcion_division(variable1, variable2))
        				      {
        				   	    printf("\n%cDesea seguir practicando o quiere regresar al menu?[ingrese s para si y n para no]: ", 168);
        						scanf(" %c",&siono);
                  } else{
                  	    funcion_result(respuesta, result);
                  }
                    }while(respuesta != result);
                  }while(siono=='s');
                      break;

            case '5':       
			                 printf("\nA salido del menu\n");
			                fflush(stdin);    break;
        }

    } while (opcion != '5');
    system("pause");
return 0;
}
