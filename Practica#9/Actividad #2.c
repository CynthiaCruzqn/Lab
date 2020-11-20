/*  Actividad #2
Declare un arreglo de 10 cadenas.
Imprima el arreglo en el orden en que fueron ingresadas cada
una de ellas y despu�s impr�malo ordenado alfab�ticamente de
la A a la Z.
*/

#include <stdio.h>
#include <string.h>


int main (){

      char arreglo[10][50], array[50];
      int i, j;
      float  auxiliar;

      for ( i = 0; i < 10; i ++){
            printf("\n\nIngrese cadena %d: ", i + 1);
            scanf("%s", &arreglo[i][0]);
      }
printf("\nLa lista de cadenas es: \n\n");
      for( i = 0; i < 10; i ++){
            printf("%d.- %s \n", i + 1, arreglo[i]);
      }

      for ( i = 0; i < 9; i ++){
            for ( j = i + 1; j < 10; j ++){
                  auxiliar = strcmp (arreglo[i], arreglo[j]);
                  if (auxiliar > 0){
                          strcpy (array, arreglo[i]);
                          strcpy (arreglo[i], arreglo[j]);
                          strcpy (arreglo[j], array);
                  }
            }
      }

      printf("\nLa lista ordenada de cadenas es: \n\n");
            for( i = 0; i < 10;  i ++){
                  printf("%d.- %s \n", i + 1, arreglo[i]);
            }

return 0;
}
