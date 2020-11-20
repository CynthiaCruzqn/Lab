/* Actividad #2
Supongamos que en la elecci�n hubo 10 candidatos
(con identificadores 1, 2, 3,�, 10). Se necesita capturar
el identificador del candidato y las cantidades de votos
que vayan llegando cuando se reciben las actas. Se desea
obtener la siguiente informaci�n:

1. El n�mero de votos de cada candidato al final de la captura.
2. El candidato ganador.
3. El n�mero de votos que obtuvo el ganador.
4. El porcentaje correspondiente del total de la elecci�n.

Suponemos que el candidato ganador no empat� en n�mero de
votos con otro candidato. */


#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
  int candidato[10] = {0,0,0,0,0,0,0,0,0,0};
	int ganador, i, numero_votantes = 0;
  float porcentaje[10];
	char inciso = 'A', opcion = 0;

  do
    {
      printf("\nLista de los 10 candidatos\n");
      for (i = 0; i < 10; i ++)
        {
					if (i == 0) {
					printf("\n%c) Candidato %d.\n", inciso, i + 1);
				}else{
					printf("\n%c) Candidato %d.\n", inciso + i, i + 1);
				}
        }
      printf("\nS) Salir.\n");
      printf("\nIngrese el inciso del candidato para ingresar voto : ");
      scanf("%c", &opcion);
      _flushall();
      opcion = toupper(opcion);
      switch(opcion)
            {
              case 'A': candidato[0] = candidato[0] + 1;
                        numero_votantes = numero_votantes + 1;
                        break;
              case 'B': candidato[1] = candidato[1] + 1;
                        numero_votantes = numero_votantes + 1;
                        break;
              case 'C': candidato[2] = candidato[2] + 1;
                        numero_votantes = numero_votantes + 1;
                        break;
              case 'D': candidato[3] = candidato[3] + 1;
                        numero_votantes = numero_votantes + 1;
                        break;
              case 'E': candidato[4] = candidato[4] + 1;
                        numero_votantes = numero_votantes + 1;
                        break;
              case 'F': candidato[5] = candidato[5] + 1;
                        numero_votantes = numero_votantes + 1;
                        break;
              case 'G': candidato[6] = candidato[6] + 1;
                        numero_votantes = numero_votantes + 1;
                        break;
              case 'H': candidato[7] = candidato[7] + 1;
                        numero_votantes = numero_votantes + 1;
                        break;
              case 'I': candidato[8] = candidato[8] + 1;
                        numero_votantes = numero_votantes + 1;
                        break;
              case 'J': candidato[9] = candidato[9] + 1;
                        numero_votantes = numero_votantes + 1;
                        break;
              case 'S': system("cls");
                        printf("\nEligio la OPCION SALIR.");
                        break;
            }
    system("cls");
	} while (opcion != 'S');

  for (i = 0; i < 10; i ++)
    {
      porcentaje[i] = (float) ((candidato[i] * 100) / numero_votantes);
    }

  for (i = 0; i < 10; i ++)
    {
      if (candidato[i] > ganador)
        {
          ganador = candidato[i];
        }
}

  system("cls");
  printf("\nVOTOS POR CANDIDATO:\n\n" );

  for (i = 0; i < 10; i ++) //ciclo for que imprime el conteo de candidatos.
    {
       printf("La cantidad de VOTOS TOTALES del CANDIDATO %d es: %d\n", i + 1, candidato[i]);
    }

  for (i = 0; i < 10; i++) //ciclo que imprime al ganador
    {
      if (candidato[i] == ganador)
        {
          printf("\nEl CANDIDATO GANADOR es el candidato numero : %d\n", i + 1);
        }
    }

  printf("\nGANAGOR OBTUBO: %d votos\n", ganador); //imprime cantidad de votos del ganador... prueba de ountero
  printf("\nPORCENTAJES POR CANDIDATO:\n\n" );

  for (i = 0; i < 10; i++)//ciclo que imprime los porcentaajes x candidato
    {
      printf("El PORCENTAJE de votos obtenidos del CANDIDATO %d es: %.2f\n", i + 1, porcentaje[i]);
    }
  printf("\nEl NUMERO de VOTANTES es: %d\n", numero_votantes);
return 0;
}
