#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>

float pedirNumero (char msg[], char errorMsg[]) {
	float numero;

	printf("%s", msg);
	fflush(stdin);
	scanf("%f", &numero);
	while (numero < 1 ) {
		printf("%s", errorMsg);
		scanf("%f", &numero);
	}
	return numero;
}
//////////////////////////////////////////////////////////////////////////////////////

float calcularDebito(float valor){
	float discount;
	float discountedPrice;
	discount = 0.9; //10% de descuento = 0.9
	discountedPrice = valor * discount;
	return discountedPrice;
}
//////////////////////////////////////////////////////////////////////////////////////

float calcularCredito(float valor){
	float increasedPrice;
	float increase = 1.25; //25% de interes
	increasedPrice = valor * increase;
	return increasedPrice;
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

	if (precioL > precioA) {
		result = precioL - precioA;
	} else {
		result = precioA - precioL;
	}
	return result;
}
//////////////////////////////////////////////////////////////////////////////////////

void forzarDatos(void) {
		float x = 7090;
		float y = 162965; //aerolineas
		float z = 159339; //latam
		float precioDebAerolineas; //10% descuento
		float precioDebLatam;
		float precioCredAerolineas; //25% de aumento
		float precioCredLatam;
		float precioBitAerolineas; // dividir pesos por bitcoin
		float precioBitLatam;
		float precioUnitAerolineas;
		float precioUnitLatam;
		float precioDif;

		printf("Se ha realizado una carga forzada, sus datos a continuacion: \n");

		precioDebLatam = calcularDebito(z);
		precioCredLatam = calcularCredito(z);
		precioBitLatam = calcularBtc(z);
		precioUnitLatam = calcularUnit(x, z); //dividido kilometros

		precioDebAerolineas = calcularDebito(y);
		precioCredAerolineas = calcularCredito(y);
		precioBitAerolineas = calcularBtc(y);
		precioUnitAerolineas = calcularUnit(x, y); //divido kilometros

		precioDif = calcularDif(y, z);

		printf("------------------------------------------------------------------------------------\n");
		printf("Kilometros ingresados: %.2fkm \n \n", x);

		printf("Precio Aerolineas: $%.2f \n", y); //y = aerolineas
		printf("a) Precio pagando con debito para Aerolineas: $%.2f \n", precioDebAerolineas);
		printf("b) Precio pagando con credito para Aerolineas: $%.2f \n", precioCredAerolineas);
		printf("c) Precio pagando con Bitcoin para Aerolineas: %.6f BTC \n", precioBitAerolineas);
		printf("d) Precio unitario Aerolineas: $%.2f \n \n", precioUnitAerolineas);

		printf("Precio Latam: $%.2f \n", z); //z = latam
		printf("a) Precio pagando con debito para Latam: $%.2f \n", precioDebLatam);
		printf("b) Precio pagando con credito para Latam: $%.2f \n", precioCredLatam);
		printf("c) Precio pagando con Bitcoin para Latam: %.6f BTC \n", precioBitLatam);
		printf("d) Precio unitario Latam: $%.2f \n \n", precioUnitLatam);

		printf("Diferencia de precio: $%.2f \n", precioDif);
		printf("------------------------------------------------------------------------------------\n");
}
//////////////////////////////////////////////////////////////////////////////////////
