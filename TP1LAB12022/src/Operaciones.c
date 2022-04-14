#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>

float pedirNumero (char msg[], errorMsg[]) {
	float numero;

	printf("%s", msg);
	scanf("%f", &numero);
	while (numero < 1 ) {
		printf("%s", errorMsg);
		scanf("%f", &numero);
	}
	return numero;
}

float calcularDebito(float valor){
	float descuento;
	float discountedPrice;
	descuento = 10;
	discountedPrice = valor - (valor/100 * descuento);
	return discountedPrice;
}

float calcularCredito(float valor){
	float augmentedPrice;
	float augment;
	augment = 25;
	augmentedPrice = valor + (valor/100 *augment);
	return augmentedPrice;


}

float calcularBtc(float valor){
	float precioBtc;
	float btc;
	btc = 4606954.55;
	precioBtc = valor / btc;
	return precioBtc;
}

float calcularUnit(float precio, float km) {
	float unitaryPrice;
	unitaryPrice = precio / km;
	return unitaryPrice;
}

float calcularDif (float precioA, float precioL) {
	float result;

	if (precioA > precioL) {
		result = precioL - precioA;
	} else {
		result = precioA - precioL;
	}
	return result;
}


