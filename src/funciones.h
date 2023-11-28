/*
 * funciones.h
 *
 *  Created on: 28 nov 2023
 *      Author: elpjavii
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_
#define MAX 100
typedef struct {
	char nombre[MAX];
	float precio;
	float iva;
	int cantidad;
} producto;

void pedirProducto(producto *p);
void mostrarProducto(producto p);
float calculoSubtotal(producto p);
float calculo(producto p);

#endif /* FUNCIONES_H_ */
