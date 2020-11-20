/* Actividad #2 
Desarrollar el siguiente programa utilizando la instrucción 
repetitiva do/while.
Se necesita un programa que permita imprimir una pirámide 
de números, del tamaño que el usuario solicite o especifique
en el programa.
Ejemplo, para una pirámide de tamaño 5:
5 , 5 , 5 , 5 , 5
4 , 4 , 4 ,4
3 , 3 , 3
2 , 2
1
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	
  int i, NumPiramide;
  
  printf("Ingrese el tamaño de su piramide [numero entero positivo, mayor a 2]: ");
  scanf("%d", &NumPiramide);

  
  do{
      printf("%d",NumPiramide);
      if(NumPiramide > 1)
        {
          i = NumPiramide;
          do{
              printf(", %d", NumPiramide);
              i = i - 1;
            } while(i > 1);
        }
      printf("\n");
      NumPiramide = NumPiramide - 1;
    } while(NumPiramide >= 1);

return 0;
system("PAUSE");

}
