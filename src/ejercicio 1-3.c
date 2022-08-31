/*
 ============================================================================
 Name        : ejercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 ingresar 3 números y mostrar el número del medio, sólo si existe.
  En caso de que no exista también informarlo.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout,NULL);
	int numero1;
	int numero2;
	int numero3;

	printf("ingrese un numero");
	scanf("%d",&numero1);

	printf("ingrese otro numero");
	scanf("%d",&numero2);

	printf("ingrese numero 3");
	scanf("%d",&numero3);

	if(numero1>numero2&&numero3>numero1)
	{
		printf("el numero del medio es el 2");
	}
	else
	{
		if(numero1==numero2||numero2==numero3)
		{
			printf("no existe el del medio");
		}

	}

	return 0;
}
