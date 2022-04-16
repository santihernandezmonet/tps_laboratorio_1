

#include <stdio.h>
#include <stdlib.h>
#include "calculosTrabajoPractico01.h"
#include "menuTrabajoPractico01.h"




int main() {



float kilometros = 0;
float precioAerolineas = 0;
float precioLatam = 0;
float aerolineasDebito;
float latamDebito;
float aerolineasCredito;
float latamCredito;
float aerolineasBit;
float latamBit;
float precioUnitarioAerolineas;
float precioUnitarioLatam;
float diferenciaVuelos;
int salida = 0;
int flagKm = 0;
int flagPrecios = 0;
int flagCalcular = 0;





	do {

		system("cls");
		fflush(stdin);

		//OPCIONES DEL MENU CON SUS FUNCIONES.
	switch(menu()){
	case 1:
		kilometros = ingresarKilometros(kilometros);
		flagKm = 1;
		system("cls");
		system("pause");

		break;
	case 2:
		if ( flagKm == 1 )
		{
		precioAerolineas = ingresarPrecioAerolineas(precioAerolineas);
		precioLatam = ingresarPrecioLatam(precioLatam);
		flagPrecios = 1;
		}
		else
		{
			printf("No se han ingresado kilometros todavía. Por favor vuelva a la opcion 1 e ingrese los kilometros.\n");
		}
		system("cls");
		system("pause");
		printf("\n- Precio vuelo Aerolineas: %.2f\n- Precio vuelo Latam: %.2f\n\n", precioAerolineas, precioLatam);
		break;
	case 3:
		if ( flagPrecios == 1)
		{
		printf("\n- Precio vuelo Aerolineas: %.2f\n- Precio vuelo Latam: %.2f\n\n", precioAerolineas, precioLatam);
		aerolineasDebito = costoDebito(precioAerolineas);
		latamDebito = costoDebito(precioLatam);

		aerolineasCredito = costoCredito(precioAerolineas);
		latamCredito = costoCredito(precioLatam);

		aerolineasBit = costoBit(precioAerolineas);
		latamBit = costoBit(precioLatam);

		precioUnitarioAerolineas = precioUnitario(kilometros, precioAerolineas);
		precioUnitarioLatam = precioUnitario(kilometros, precioLatam);

		diferenciaVuelos = diferenciaPrecio(precioLatam, precioAerolineas);

		flagCalcular = 1;
		}
		else
		{
		 printf("Todavia no se han ingresado los precios de los vuelos. Por favor vuelva a la opcion 2 e ingrese los precios.\n");
		}
		system("cls");
		system("pause");
		break;

		case 4:
			if ( flagCalcular == 1 )
			{

			printf("\nKMs Ingresados: %.2fkm\n\n", kilometros);
			printf("Precio Aerolineas: $%.2f\n", precioAerolineas);
			printf("a) Precio con tarjeta de debito: $%.2f\n", aerolineasDebito);
			printf("b) Precio con tarjeta de credito: $%.2f\n", aerolineasCredito);
			printf("c) Precio pagando con bitcoin: %.8f BTC\n", aerolineasBit);
			printf("d) Mostrar precio unitario: $%.2f\n\n", precioUnitarioAerolineas);

			printf("Precio Latam: $%.2f\n", precioLatam);
			printf("a) Precio con tarjeta de debito: $%.2f\n", latamDebito);
			printf("b) Precio con tarjeta de credito: $%.2f\n", latamCredito);
			printf("c) Precio pagando con bitcoin: %.8f BTC\n", latamBit);
			printf("d) Mostrar precio unitario: $%.2f\n\n", precioUnitarioLatam);
			printf("La diferencia de precio es: $%.2f\n", diferenciaVuelos);
			system("pause");
			} else {
				printf("\nNo se ha ingresado el precio de ninguna aerolinea. Por favor vuelva a la opcion 3 e ingrese los precios para poder calcular costos.\n");
			}
			system("cls");
			system("pause");

		break;

		case 5:
			//SE REALIZA LA CARGA FORZADA DE DATOS
			kilometros = 7090;
			precioAerolineas = 162965;
			precioLatam = 159339;

			aerolineasDebito = costoDebito(precioAerolineas);
			latamDebito = costoDebito(precioLatam);

			aerolineasCredito = costoCredito(precioAerolineas);
			latamCredito = costoCredito(precioLatam);

			aerolineasBit = costoBit(precioAerolineas);
			latamBit = costoBit(precioLatam);

			precioUnitarioAerolineas = precioUnitario(kilometros, precioAerolineas);
			precioUnitarioLatam = precioUnitario(kilometros, precioLatam);

			diferenciaVuelos = diferenciaPrecio(precioLatam, precioAerolineas);


			printf("\nKMs Ingresados: %.2fkm\n\n", kilometros);
			printf("Precio Aerolineas: $%.2f\n", precioAerolineas);
			printf("a) Precio con tarjeta de debito: $%.2f\n", aerolineasDebito);
			printf("b) Precio con tarjeta de credito: $%.2f\n", aerolineasCredito);
			printf("c) Precio pagando con bitcoin: %.8f BTC\n", aerolineasBit);
			printf("d) Mostrar precio unitario: $%.2f\n\n", precioUnitarioAerolineas);

			printf("Precio Latam: $%.2f\n", precioLatam);
			printf("a) Precio con tarjeta de debito: $%.2f\n", latamDebito);
			printf("b) Precio con tarjeta de credito: $%.2f\n", latamCredito);
			printf("c) Precio pagando con bitcoin: %.8f BTC\n", latamBit);
			printf("d) Mostrar precio unitario: $%.2f\n\n", precioUnitarioLatam);
			printf("La diferencia de precio es: $%.2f\n", diferenciaVuelos);
			system("pause");

			break;
		case 6:
			//SALIDA DEL PROGRAMA
			salida = 1;
			printf("\n\t\tFIN DEL PROGRAMA\n");
			system("pause");
	}





	} while (salida == 0);







	return 0;
}



