#include<stdio.h>
#include <conio.h>

// 3) int Main(void){ }
// El comando "main" debe de estar en minusculas
// al ser un comando que da inicio, se es agregado primero.
int main(void){ 
   
  
  //1)  printf( "El producto de %d y %d es %d"\n, a1, a2 );
  //Hay un salto de linea y falta la variable que se 
  //imprimira, es decir el producto.
  int a1 = 99, a2 = 13, prod = a1 * a2; 
  printf("El producto de %d y %d es: %d\n", a1, a2, prod);

  //2)  scanf("%d", 8_x)
  //Falta el simbolo & antes de la variable; esta no puede 
  //ser declarada primero con un caracter númerico. Al igual
  // se tiene que cerrar con el caracter " ; "
  int x_8;
  printf("Ingrese un valor numerico entero:");
  scanf("%d",&x_8 );_flushall();
  printf("El valor ingresado es: %d\n", x_8);

  //4)  print( "La suma es %d\n," a + b);
  //El error esta en el comando printf(""); que no tiene la "f"
  // y unas comillas estan mal colocadas, estas tienen que 
  // ir antes de la coma
  int a = 11, b = 7;
  printf("  %d + %d = ?\n", a, b);
  printf("La suma es: %d\n", a + b);
  

  //5)  numero1 / numero2 = div
  //El error esta en que, hay que nombrar la primero la variable
  // a utilizar, para igualarlo a la operacion que queremos 
  // utilizar. Al igual falta cerrar con el caracter " ; "
  int numero1 = 17, numero2 = 23;
  float div = (float) numero1 / numero2;
  printf("El cociente de %d entre %d es: %f\n", numero1, numero2, div );

  //6)  Printf("El valor proporcionado es: %d\n, &variable1 );
  // El primer error se encuentra en printf(""), el cual se tiene que 
  // colocar en minusculas y sin mayusculas; falta el finalizar el enuncaido 
  // sus respectivas comillas. Al igual "&", no tien que estar en esta función
  char caracter;
  printf("Ingrese una letra : ");
  scanf("%c", &caracter); _flushall();
  int variable1 = (int) caracter;
  printf("El valor proporcionado es: %d\n", variable1);

  //7)  Scanf("%d",numEntero );
  // El primer error se encuentra scanf(""), el cual se tiene que 
  // colocar en minusculas y sin mayusculas. Al igual falta agregar 
  // el comando "&" antes de la variable numEntero
  int numEntero; printf("Ingrese un numero entero: " );
  scanf("%d", &numEntero); _flushall();
  printf("El numero entero ingresado es: %d\n",numEntero );

  //8)  */ programa que convierte de grados celcius a fahrenheit /*
  // Es un comentario en si, no un comando a realizar. Aparte que esta mal 
  // ingresado el comando para colocar un comentario de multiples lineas;  
  //los comandos estan intercambados de lugar, tiene que estar
  // de la siguiente manera: /* y */ [ejemplo de C a F]

  /* programa que convierte de grados celcius a a fahrenheit */
  int C,conv;
  printf("Dame la temperatura en grados centigrados");
  scanf("%d",&C);
  conv=(C*9/5)+32;// Formula conversora
  printf("La conversion a F es %d",conv);
  
  //9) printf( "El residuo de %d dividido entre %d es \n", a, b, a % b );
  // El primer error se encuentra en el desface de %d y \n, los 
  // cuales tiene que estar juntos, para despues poner el "es:", al
  // igual que solo hay que colocar la variable "a % b"
  // printf("El residuo de %d dividido entre %d\n es: ", a % b);

  //10)  scanf("f", valor);
  //Falta el simbolo " % " antes de la letra f, el segundo
  //error es que falta el simbolo & antes de la variable valor.
  float valor;
  printf("Ingrese un valor numerico: ");
  scanf("%f", &valor); _flushall();
  printf("El numero ingresado es: %8.2f\n", valor);

}
