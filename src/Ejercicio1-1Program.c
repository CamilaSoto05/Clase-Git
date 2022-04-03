/*
 ============================================================================
 Name        : Ejercicio1-1Program.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 Soto Camila Belen
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);

	int numeroUno;
	int numeroDos;
	int suma;

	printf("Ingrese un numero: \n");
	scanf("%d",&numeroUno);

	printf ("Ingrese otro numero: \n");
	scanf("%d",&numeroDos);

	suma= numeroUno+numeroDos;

	printf("La suma entre %d y %d da como resultado %d",numeroUno,numeroDos,suma);

	return EXIT_SUCCESS;
}
