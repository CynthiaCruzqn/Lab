/* Actividad #1
Declare dos arreglos de 10 cadenas, un arreglo con los nombres
de sus compa�eros y el otro arreglo con sus apellidos. Construya
un tercer arreglo con el nombre completo de los 10 compa�eros e
imprima el resultado.
*/

#include <stdio.h>
#include <string.h>

int main(){

char Nombres[10][32], Apellidos[10][32];
char Completo[10][100];
int i = 0;

for (i = 0; i < 10; i++){

printf("\nIngrese el nombre %d: ", i + 1);
scanf("%s", &Nombres[i][0]);
printf("\nIngrese el apellido %d: ", i + 1);
scanf("%s", &Apellidos[i][0]);

strcpy(Completo[i], Nombres[i]);
strcat(Completo[i], " ");
strcat(Completo[i], Apellidos[i]);
}

printf("\nLa lista de nombres completos es:\n ");


for(i = 0; i < 10; i++){
  printf("\n %d .-  %s \n", i + 1, Completo[i]);
}

system("pause");
  return 0;
}
