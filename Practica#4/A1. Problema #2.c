/* Problema #2
Calcular el aumento de sueldo para un trabajador, 
siguiendo el siguiente criterio: Si el sueldo es
menor a $5,000 el aumento sería de 15%, si el 
sueldo está comprendido entre $5,000 y $15,000 el 
aumento sería de 10% y si el sueldo es mayor a 
$15,000 el aumento sería de 7%. Imprima el número 
del trabajador y su nuevo sueldo. */

#include<stdio.h>

int main(){
	int numero_de_trabajador;
	float sueldo, nuevo_sueldo;
	printf("Hola. Por favor ingrese su numero de trabajador: ");
	scanf("%d", &numero_de_trabajador);
	printf("Ingrese su sueldo actual: ");
	scanf("%f", &sueldo);
	if (sueldo < 5000) {
 	nuevo_sueldo = sueldo * 1.15;
    } 
    else if (sueldo >= 5000 && sueldo <= 15000) {
    nuevo_sueldo = sueldo * 1.10;
    }
    else if (sueldo > 15000) {
 	nuevo_sueldo = sueldo * 1.07;
    }
    printf("Su numero de trabajador es: %i\n", numero_de_trabajador);
    printf ("Su nuevo sueldo es de: %8.2f\n", nuevo_sueldo);
    return 0;
	
}
