#include "calculosTrabajoPractico01.h"


//Se le pide al usuario que ingrese la cantidad de km y se valida que no sea menor o igual a 0.
float ingresarKilometros(float km){


	printf("Ingrese la cantidad de kilometros: \n");
	scanf("%f", &km);
	while ( km <= 0) {
		printf("Ingrese una cantidad valida de kilometros. Mayor a 0 : \n");
		scanf("%f", &km);
	}



	return km;
}
//Se le pide al usuario que ingrese el precio de la aerolinea y se verifica que no sea un num negativo.
float ingresarPrecioAerolineas(float a){

	printf("Ingrese el precio de Aerolineas: \n");
	scanf("%f", &a);
	while(a < 0) {
		printf("Ingreso un numero invalido. Por favor ingrese un precio: \n");
		scanf("%f", &a);
	}


	return a;

}
//Se le pide al usuario que ingrese el precio de la aerolinea y se verifica que no sea un num negativo.

float ingresarPrecioLatam(float a){

	printf("\nIngrese el precio de Latam: \n");
	scanf("%f", &a);
	while(a < 0) {
			printf("Ingreso un numero invalido. Por favor ingrese un precio: \n");
			scanf("%f", &a);
		}


	return a;

}
//CALCULO DESCUENTO DEBITO
float costoDebito(float a){


	return a - ( a * 0.1);

}
//CALCULO INTERES CREDITO
float costoCredito(float a){


	return a + (a * 0.25);



}
//CALCULO COSTO EN BITCOIN
float costoBit(float a){


	return a * 1 / 4605024.01;
}
//CALCULO PRECIO UNITARIO
float precioUnitario(float a, float b){


	return b / a;


}
//CALCULO DIFERENCIA ENTRE PRECIOS DE AEROLINEAS.
float diferenciaPrecio(float a, float b){
	if (a > b) {
		return a - b;
	}

	else {
		return b-a;
	}



}
