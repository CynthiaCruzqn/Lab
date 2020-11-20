#include <stdio.h>

float promedio(int valores[], int cantidad) {
    int i;
    float suma = 0.0;

    for (i = 0; i < cantidad; ++i)
        suma += valores[i];

    return suma / (float) cantidad;
}


int main() {

    char opcion[3];    
    int i, n, Matricula;
    float PromAlumno, PromGrupo, P1, P2, P3, P4, Prom1, Prom2, Prom3, Prom4, SumaCalif;
	int j=0,aprobados=0,reprobados=0;
	float p_reprob,p_aprob;
    
    
    printf("\n Hola\n");
    

    do {
   	printf("Ingrese la matricula del alumno ");
	scanf("%i", &Matricula);
	
	printf("Ingrese la calificación del Primer Examen: ");
	scanf("%f", &P1);
	Prom1 = (P1 * 15)/100;
	
	printf("Ingrese la calificación del Segundo Examen: ");
	scanf("%f", &P2);
	Prom2 = (P2 * 20)/100;	
	
	printf("Ingrese la calificación del Tercer Examen: ");
	scanf("%f", &P3);
	Prom3 = (P3 * 30)/100;
	
	printf("Ingrese la calificación del Cuarto Examen: ");
	scanf("%f", &P4);
	Prom4 = (P4 * 35)/100;
	
	PromAlumno = Prom1 + Prom2 + Prom3 + Prom4;
	
	printf("\n\nEl alumno con matricula %i tiene un promedio de examenes de %f \n\n", Matricula, PromAlumno);
	
		
	SumaCalif += PromAlumno;
	
			if(PromAlumno >= 7)
			aprobados++;
		else
			reprobados++;
		i++;
	

        printf("Desea calcular mas promedios (si/no)? ");
        scanf("%s", opcion);

    } while (opcion[0] == 's' || opcion[0] == 'S');
    
    
    		
	PromGrupo = SumaCalif / i;
	
	printf("El grupo tiene un promedio de : %f\n", PromGrupo);
	

	p_aprob = (float)(aprobados * 100) / i;
	p_reprob = (float)(reprobados * 100)/ i;

	printf("\nPorcentaje de alumnos aprobados: %.2f %%\n",p_aprob);
	printf("\nPorcentaje de alumnos reprobados: %.2f %%\n",p_reprob);
    
    
    
    

    return 0;
    system("PAUSE");
}
