/*
 ============================================================================
 Name        : TP1LAB1.c
 Author      : sorokaYago
 Copyright   : 2022
 Ejercicio   : agencia de viaje necesita calcular costos para sus vuelos de
 Latam y Aerolneas Argentinas para ofrecerlos a sus clientes.
Se deber ingresar por cada vuelo los km totales y el precio total del mismo.
El objetivo de la aplicacin es mostrar las diferentes opciones de
pagos a sus clientes. Para ello el programa iniciar y
contarcon un men de opciones
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(void) {
	setbuf(stdout, NULL);
	int opcion;
	float x;
	float y;
	float z;
	float precioDebAerolineas;
	float precioCredAerolineas;
	float precioBitAerolineas;
	float precioUnitAerolineas;
	float precioDebLatam;
	float precioCredLatam;
	float precioBitLatam;
	float precioUnitLatam
	float precioDif;

	//x= kilome
	//y= Aerolineas
	//z= latam

	do{
		printf("1) Ingresar kilometros: (km= %.2f) \n", x);
		printf("2) Ingresar precio de vuelos: (Aerolineas = %.2f, Latam = %.2f) \n", y, z);
		printf("3) Calcular todos los costos \n");
		printf("4) Informar Resultados: \n");
		printf("3) Carga forzada de datos \n");
		printf("6) Salir\n");
		fflush(stdin);
		scanf("%d", &opcion);
	switch (opcion) {
	case 1:
		x = pedirNumero("Ingrese kilometros: \n", "Error, ingrese un numero valido\n");
		break;
	case 2:
		y = pedirNumero("Ingrese precio de Aerolineas: \n", "Error, ingrese un precio valido de Aerolineas");
		z = pedirNumero("Ingrese precio de Latam: ", "Error, ingrese un precio valido de Latam");
		break;
	case 3:
		precioDebAerolineas = calcularDebito(y);
		precioCredAerolineas = calcularCredito(y);
		precioBitAerolineas = calcularBtc(y);
		precioUnitAerolineas = calcularUnit(y, x); //kilometros
		precioDebLatam = calcularDebito(z);
		precioCredLatam = calcularCredito(z);
		precioBitLatam = calcularBtc(z);
		precioUnitLatam = calcularUnit(z, x); //kilometros
		precioDif = calcularDif(y, z);
		printf("su operacion se ha calculado corectamente");
		break;
	case 4:
		printf("\n kilometros ingresados: %.2f",x);

		printf("\n El precio de &.2f es: ", y); //aerolineas
		printf("\nEl precio con debito para Aerolineas es: %.2f", precioDebAerolineas);
		printf("\nEl precio con credito para Aerolineas es: %2.f", precioCredAerolineas);
		printf("\nEl precio Bitcoin para Aerolineas es: %2.f", precioBitAerolineas);
		printf("\nEl precio unitario para Aerolineas es: %2.f", precioUnitAerolineas);

		printf("\n El precio de latam &f es: ", z); //y
		printf("\nEl precio con debito para Latam es: %.2f", precioDebLatam);
		printf("\nEl precio con credito para Latam es: %2.f", precioCredLatam);
		printf("\nEl precio Bitcoin para Latam es: %2.f", precioBitLatam);
		printf("\nEl precio unitario para Latam es: %2.f", precioUnitLatam);

		printf("\nLa diferencia de precio es: %2.f", precioDif);
		break;
	case 5:
		break;
	case 6:
		break;
	default:
	}

	}while(opcion != 6);


	/*int i;

	for (i=0; i<20; i++) {
		printf("mensaje %d\n", i+1);
	}
*/
	return EXIT_SUCCESS;
}
