/*PROBLEMA #2:
Desarrolle un programa para calcular el pago a realizar
 sobre el consumo de agua de un domicilio.
Consideraciones:
- Solicitar la cantidad de metros cúbicos consumida.
- Solicitar el precio por metro cúbico.
- Si hay un saldo anterior deberá considerarlo también
  para el cálculo del pago.
- En caso de que haya un saldo anterior, cobrar una 
  comisión del 8% sobre este saldo.
- Debe solicitar también el número de medidor e imprimir
  el pago que debe realizarse para ese número de medidor.*/
  
#include <stdio.h>

int main () {
	float Consumo, Precio, SaldoAnterior, Respuesta, Total;
	int NumeroMedidor;
	printf("Hola. Por favor ingrese el numero de medidor: ");
	scanf("%i", &NumeroMedidor);
	printf("Ingrese la cantidad de agua consumida : ");
	scanf("%f", &Consumo);
	printf("¿Cual es el precio por metro cubico?: ");
	scanf("%f", &Precio);
	printf("¿Tiene algun saldo pendiente? [Ingrese 0, si es asi, y 1 si no\n]");
	scanf("%i", &Respuesta);
	
	if(Respuesta==0){
		printf("Ingrese la cantidad de saldo pendiente: ");
		scanf("%f", &SaldoAnterior);
		Total = (Consumo * Precio) + SaldoAnterior + (SaldoAnterior * .08);
		printf("Su numero de medidor es: %i\n", NumeroMedidor);
		printf("Y la cantidad total a pagar es: %.2f pesos\n", Total);
	} else {
		Total = (Consumo * Precio);
		printf("Su numero de medidor es: %i\n", NumeroMedidor);
		printf("Y la cantidad total a pagar es: %.2f pesos\n", Total);
	}
		return 0;
	}
