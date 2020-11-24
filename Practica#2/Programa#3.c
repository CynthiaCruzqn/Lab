#include<stdio.h>
#include<ctype.h>

int main (){
	char texto1[50], texto2[50], a1, a2;
	printf("Ingrese texto en minusculas: ");
	gets(texto1);
	printf("Ingrese el mismo texto, pero en mayusculas: ");
	gets(texto2);
	printf("Ingrese un caracter en mayuscula: ");
	scanf("%c", &a1);
	fflush(stdin);
	printf("Ingrese un caracter en minuscula: ");
	scanf("%c", &a2);
	fflush(stdin);
	printf("\nImresion en minuscula\n");
	printf("El texto en minusculas es: ");
	puts(texto1);
	a1 = tolower(a1);
	printf("El caracter de mayuscula a minuscula es: %c", a1);
	fflush(stdin);
	printf("\nEl caracter en minuscula es: %c", a1);
	fflush(stdin);
	printf("\n");
	printf("\nImresion en mayuscula\n");
	printf("El texto en mayusculas es: ");
	puts(texto2);
	a1 = toupper(a1);
	printf("\nEl caracter en mayuscula es; %c", a1);
	a2 = toupper(a2);
	printf("\nEl caracter de minuscula a mayusculas es: %c", a2);
	
	return 0;
	
}
