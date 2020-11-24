/* Actividad #2
Determine la salida si se implementa el
 siguiente bloque de código: */

#include <stdio.h>

int main () {
	
 int x = 2; puts("Arranque");
 if(x <= 3)
 if(x != 0)
 puts("Hola desde el segundo if");
 else
 puts("Hola desde el else");
 puts("Fin \nArranque de nuevo");
 if(x > 3)
 if(x != 0)
 puts("Hola desde el segundo if 2");
 else
 puts("Hola desde el else 2");
 puts("De nuevo fin");
 
 return 0;
 
}

/* Al ser x=2 ocasiona que este no salga para que se ejecute 
el "if/else" y por lo tanto nos arroja directamente la impresion
de los mismos [segun el caso]; sin condicionar ya sea si x=2, 
x<=3, x!=0 o x>3, para que nos arroje el comentario en cualquiera
de los casos planteados. */
