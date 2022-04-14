/*
 ============================================================================
 Name        : TP1LAB1.c
 Author      : sorokaYago
 Copyright   : 2022
 Ejercicio   : agencia de viaje necesita calcular costos para sus vuelos de
 Latam y Aerolíneas Argentinas para ofrecerlos a sus clientes.
Se deberá ingresar por cada vuelo los km totales y el precio total del mismo.
El objetivo de la aplicación es mostrar las diferentes opciones de
pagos a sus clientes. Para ello el programa iniciará y
contará con un menú de opciones
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int i;

	for (i=0; i<20; i++) {
		printf("mensaje %d\n", i+1);
	}

	return EXIT_SUCCESS;
}
