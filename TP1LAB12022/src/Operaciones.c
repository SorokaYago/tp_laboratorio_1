#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>

float pedirNumero (char msg[], char errorMsg[]) {
	float numero;

	printf("%s", msg);
	scanf("%f", &numero);
	while (numero < 1 ) {
		printf("%s", errorMsg);
		scanf("%f", &numero);
	}
	return numero;
}
//////////////////////////////////////////////////////////////////////////////////////

float calcularDebito(float valor){
	float descuento;
	float discountedPrice;
	descuento = 10;
	discountedPrice = valor - (valor/100 * descuento);
	return discountedPrice;
}
//////////////////////////////////////////////////////////////////////////////////////

float calcularCredito(float valor){
	float augmentedPrice;
	float augment;
	augment = 25;
	augmentedPrice = valor + (valor/100 *augment);
	return augmentedPrice;
}
//////////////////////////////////////////////////////////////////////////////////////

float calcularBtc(float valor){
	float precioBtc;
	float btc;
	btc = 4606954.55;
	precioBtc = valor / btc;
	return precioBtc;
}
//////////////////////////////////////////////////////////////////////////////////////

float calcularUnit(float precio, float km) {
	float unitaryPrice;
	unitaryPrice = precio / km;
	return unitaryPrice;
}
//////////////////////////////////////////////////////////////////////////////////////

float calcularDif (float precioA, float precioL) {
	float result;

	//x= kilome
	//y= Aerolineas
	//z= latam

	if (precioA > precioL) {
		result = precioL - precioA;
	} else {
		result = precioA - precioL;
	}
	return result;
}
//////////////////////////////////////////////////////////////////////////////////////

void forzarDatos(void) {
		float x = 7090;
		float y = 162965;
		float z = 159339;
		float precioDebAerolineas;
		float precioDebLatam;
		float precioCredAerolineas;
		float precioCredLatam;
		float precioBitAerolineas;
		float precioBitLatam;
		float precioUnitAerolineas;
		float precioUnitLatam;
		float precioDif;

		printf("Se esta realizando una carga forzada: \n \n");

		precioDebLatam = calcularDebito(z);
		precioCredLatam = calcularCredito(z);
		precioBitLatam = calcularBtc(z);
		precioUnitLatam = calcularUnit(x, z); //kilometros

		precioDebAerolineas = calcularDebito(y);
		precioCredAerolineas = calcularCredito(y);
		precioBitAerolineas = calcularBtc(y);
		precioUnitAerolineas = calcularUnit(x, y); //kilometros

		precioDif = calcularDif(y, z);

		printf("Latam: %.2f \n", z); //y
		printf("a) Precio pagando con debito para Latam: %.2f \n", precioDebLatam);
		printf("b) Precio pagando con credito para Latam: %.2f \n", precioCredLatam);
		printf("c) Precio pagando con Bitcoin para Latam: %.2f \n", precioBitLatam);
		printf("d) Precio unitario Latam: %.2f \n", precioUnitLatam);

		printf("Aerolineas: %.2f \n", y); //aerolineas
		printf("a) Precio pagando con debito para Aerolineas: %.2f \n", precioDebAerolineas);
		printf("b) Precio pagando con credito para Aerolineas: %.2f \n", precioCredAerolineas);
		printf("c) Precio pagando con Bitcoin para Aerolineas: %.2f \n", precioBitAerolineas);
		printf("d) Precio unitario Aerolineas: %.2f \n", precioUnitAerolineas);

		printf("Diferencia de precio: %.2f \n \n", precioDif);
}
//////////////////////////////////////////////////////////////////////////////////////
