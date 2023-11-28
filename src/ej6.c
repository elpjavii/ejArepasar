/*
 ============================================================================
 Name        : ej6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define MAXPROD 300
int main(void) {
	producto x[MAXPROD];
	float d[MAXPROD];
	float total = 0;
	int h, t = 1, cont = 0, k, prote = 0;

	puts("");
	puts("");

	do{
	puts("Introduce un numero del 1 al 4 para elegir una opcion o 0 para salir: ");
	if(t < 0 || t > 4) puts("numero no comprendido entre 0 y 4");
	fflush(stdout);
	scanf("%d", &h);
	switch(h){
	case 1:
		pedirProducto(&x[cont]);
		cont++;
		for (t = 0; t < cont; t++){
			mostrarProducto(x[t]);
		}
		break;
	case 2:
		for (k = 0; k < cont; k++){
			d[k] = calculoSubtotal(x[k]);
			printf("el calculo subtotal del producto %s es %.2f\n", x[k].nombre, d[k]);
		}
		break;
	case 3:
		for (k = 0; k < cont; k++){
			d[k] = calculo(x[k]);
			printf("el calculo con iva del producto %s es %.2f\n", x[k].nombre, d[k]);
		}
		break;
	case 4:
		prote = cont;
		if(cont == prote ){
			for (k = 0; k < cont; k++){
				total = total + calculo(x[k]);
			}
		}
		printf("el precio total del carrito es %.2f\n", total);
		break;
	default:
		return 0;
	}
	}while(h >= 0 || h < 4);
}
