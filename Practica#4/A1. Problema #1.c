/* Actividad #1
Problema #1
Desarrollar el siguiente programa utilizando la estructura de selección switch.
En un hospital se ha hecho un estudio sobre los pacientes registrados durante los 
últimos 10 años, con el objetivo de hacer una aproximación de los costos de 
internación por paciente. Se obtuvo un costo promedio diario según el tipo de 
enfermedad que aqueja al paciente. Además, se pudo determinar que en promedio 
todos los pacientes con edad entre 13 y 22 años implican un costo adicional del
15%. Calcular el monto que deberá pagar un paciente que ingrese a este hospital.
La siguiente tabla expresa los costos diarios, según el tipo de enfermedad. 

          Tipo de enfermedad   Costo/paciente/día 
               1                  500
		       2                  850 
		       3                 1250 
		       4                 2000
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
  int tipo_de_enfermedad, edad_del_paciente, dias_de_hospitalizacion;
  float cuenta_hospital;

  printf("\nIngrese la edad del paciente: " );
  scanf("%d",&edad_del_paciente);
  printf("\nIngrese dias de hospitalizacion: ");
  scanf("%d", &dias_de_hospitalizacion);
  system("cls");
  printf("\n\tTipo de\t\tCosto/Paciente/Dia\n\tEnfermedad");
  printf("\n\n\t 1\t\t\t 500");
  printf("\n\t 2\t\t\t 850");
  printf("\n\t 3\t\t\t1250");
  printf("\n\t 4\t\t\t2000");
  printf("\n\nIngrese un tipo de enfermedad del menu anterior: ");
  scanf("%d", &tipo_de_enfermedad);
  switch (tipo_de_enfermedad){
         case 1: cuenta_hospital = (float) dias_de_hospitalizacion * 500; break;
         case 2: cuenta_hospital = (float) dias_de_hospitalizacion * 850; break;
         case 3: cuenta_hospital = (float) dias_de_hospitalizacion * 1250; break;
         case 4: cuenta_hospital = (float) dias_de_hospitalizacion * 2000; break;
       }
       if (edad_del_paciente >= 13 && edad_del_paciente <= 22){
         cuenta_hospital = (cuenta_hospital) + (cuenta_hospital * .15) ;
       }
  system("cls");
  printf("Edad del paciente es: %d\n", edad_del_paciente);
  printf("Los dias que estuvo en hospitalizacion son: %d\n", dias_de_hospitalizacion);
  printf("El tipo de enfermedad segun el menu: %d\n", tipo_de_enfermedad);
  printf("En total, la cuenta del paciente es: %8.2f\n", cuenta_hospital);
return 0;
}
