/*
 ============================================================================
 Name        : TP1LAB1.c
 Author      : sorokaYago
 Copyright   : 2022
 Ejercicio   : agencia de viaje necesita calcular costos para sus vuelos de
 Latam y Aerolneas Argentinas para ofrecerlos a sus clientes.
Se deber ingresar por cada vuelo los km totales y el precio total del mismo.
El objetivo de la aplicacin es mostrar las diferentes opciones de
pagos a sus clientes. Para ello el programa debe iniciar y
contar con un menu de opciones.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(void) {
	setbuf(stdout, NULL);
	int opcion;
	float x = 0;
	float y = 0;
	float z = 0;
	float precioDebAerolineas = 0;
	float precioCredAerolineas = 0;
	float precioBitAerolineas = 0;
	float precioUnitAerolineas = 0;
	float precioDebLatam = 0;
	float precioCredLatam = 0;
	float precioBitLatam = 0;
	float precioUnitLatam = 0;
	float precioDif = 0;

	//x= kilome
	//y= Aerolineas
	//z= latam

	do{
		printf("(1) Ingresar kilometros: [sus km son= %.2f] \n", x);
		printf("(2) Ingresar precio de vuelos: (Aerolineas = %.2f, Latam = %.2f) \n", y, z);
		printf("(3) Calcular todos los costos \n");
		printf("(4) Informar Resultados: \n");
		printf("(5) Carga forzada de datos \n");
		printf("(6) Salir\n \n");
		fflush(stdin);
		scanf("%d", &opcion);
	switch (opcion) {
	case 1:
		x = pedirNumero("Ingrese kilometros: \n \n", "Error, ingrese un numero valido. \n \n");
		break;
	case 2:
		y = pedirNumero("Ingrese precio de Aerolineas: \n \n", "Error, ingrese un precio valido de Aerolineas. \n \n");
		z = pedirNumero("Ingrese precio de Latam: \n \n", "Error, ingrese un precio valido de Latam. \n \n");
		break;
	case 3:
		//x= kilome
		//z= latam
		//y= Aerolineas

		precioDebLatam = calcularDebito(z);
		precioCredLatam = calcularCredito(z);
		precioBitLatam = calcularBtc(z);
		precioUnitLatam = calcularUnit(x, z); //kilometros

		precioDebAerolineas = calcularDebito(y);
		precioCredAerolineas = calcularCredito(y);
		precioBitAerolineas = calcularBtc(y);
		precioUnitAerolineas = calcularUnit(x, y); //kilometros

		precioDif = calcularDif(y, z);

		printf("Su operacion se ha calculado corectamente. \n \n");
		break;
	case 4:
		printf("Se ha calculado corectamente. \n \n");

		printf("Kilometros ingresados: %.2f \n \n",x);

		printf("Precio Latam: %.2f \n", z); //y
		printf("a) Precio pagando con debito para Latam: %.2f \n", precioDebLatam);
		printf("b) Precio pagando con credito para Latam: %.2f \n", precioCredLatam);
		printf("c) Precio pagando con Bitcoin para Latam: %.2f \n", precioBitLatam);
		printf("d) Precio unitario Latam: %.2f \n \n", precioUnitLatam);

		printf("Precio Aerolineas: %.2f \n", y); //aerolineas
		printf("a) Precio pagando con debito para Aerolineas: %.2f \n", precioDebAerolineas);
		printf("b) Precio pagando con credito para Aerolineas: %.2f \n", precioCredAerolineas);
		printf("c) Precio pagando con Bitcoin para Aerolineas: %.2f \n", precioBitAerolineas);
		printf("d) Precio unitario Aerolineas: %.2f \n \n", precioUnitAerolineas);

		printf("Diferencia de precio: %.2f \n \n", precioDif);
		break;

	case 5:
		forzarDatos();
		break;

	case 6:
		printf("HAS SALIDO DEL PROGRAMA. \n \n");
		break;
	default:
		printf("Incorrecto, por favor ingrese un numero del 1 al 6. \n \n");
		break;
	}

	}while(opcion != 6);
}
