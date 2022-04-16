#include "menuTrabajoPractico01.h"
int menu() {
	setbuf(stdout, NULL);
	int opcion;

	system("cls");
	printf("\t\t ***  MENU DE OPCIONES  ***\n");
	printf("\t\t    ----------------\n\n");
	printf("\t\t1. Ingresar Kilómetros \n");
	printf("\t\t2. Ingresar Precio de Vuelos \n");
	printf("\t\t3. Calcular Costos \n");
	printf("\t\t4. Informar Resultados \n");
	printf("\t\t5. Carga Forzada de Datos \n");
	printf("\t\t6. Salir \n\n");

	printf("\t\tIngrese opcion: ");
	scanf("%d", &opcion);

	while (opcion < 1 || opcion > 6) {
		printf("Ingreso un numero invalido. Por favor ingrese una opcion del 1 al 6: \n");
		scanf("%d", &opcion);
	}

	return opcion;

}
