/*
 * funciones.c
 *
 *  Created on: 28 nov 2023
 *      Author: elpjavii
 */
#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <string.h>

void pedirProducto(producto *p){
		puts("Introduce Nombre:");
		fflush(stdout);
		scanf("%s", p->nombre);

		puts("Introduce Precio: ");
		fflush(stdout);
		scanf("%f", &p->precio);

		p->iva = 1.21;
//		puts("Introduce IVA: ");
		fflush(stdout);
//		scanf("%f", &p->iva);

		puts("Introduce cantidad: ");
		fflush(stdout);
		scanf("%d", &p->cantidad);
}

void mostrarProducto(producto p){
	printf("tienes %d %s que cuestan por unidad %.2f y con el iva %.2f\n", p.cantidad, p.nombre, p.precio, p.iva);
}

float calculoSubtotal(producto p){
	float x;
	x = p.precio * p.cantidad;
	return x;
}
float calculo(producto p){
	return p.cantidad * p.precio * p.iva;
}
