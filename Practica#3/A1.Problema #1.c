/*PROBLEMA #1:
Desarrolle un programa que determine si una persona es 
ni�o, joven o adulto; al ingresar su edad.
Consideraciones:
-Rango de edad para un ni�o: 0 a 10 a�os.
-Rango de edad para un joven: 10 a 30 a�os.
-Rango de edad para un adulto: m�s de 30 a�os.
-Debe solicitar su nombre e imprimirlo.*/

#include <stdio.h>

int main () {
 char Nombre[50];
 int E; 
 printf ("Hola. Ingrese su nombre para asignarle su categoria:  ");
 gets(Nombre); 
 printf ("Introdusca su edad:  ");
 scanf ("%i",&E);
 if (0<E, E<=10) {
 	puts(Nombre);
  printf ("Usted pertenece a la categoria de ni�o.\n");
 } 
 else if (11<=E, E<=30) {
 	puts(Nombre);
  printf ("Usted pertenece a la categoria de joven.\n");
 }
 else if (E>30) {
 	puts(Nombre);
  printf ("Usted pertenece a la categoria de adulto.\n");
 }
 return 0;
}
