/*
 * funcionesGenerales.c
 *  Created on: 15 abr 2022
 *  Author: Alan Galvan
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pedirDatos.h"
#include "calcularDatos.h"
#include "funcionesGenerales.h"

/***
 * @fn void mostrarMenu()
 * @brief Imprime las opciones del menu
 * Description : Se muestran 6 opciones distintas
 * Opciones validas opcion > 0 y opcion < 7
 */
void mostrarMenu(){
	int opcion;
	int opcionValida;
	float kilometraje;
	float precioAerolineas[2] = {0,0};
	float resultadoCostoAeroArg[5];
	float resultadoCostoLATAM[5];
	float descuento = 10;
	float interes = 25;
	float precioBTC = 4606954.55;
	setbuf(stdout, NULL);
	do{
		printf("\t\n1.Ingresar Kilometros.");
		printf("\n2.Ingresar precio de vuelo.");
		printf("\n3.Calcular todos los costos.");
		printf("\n4.Informar resultados.");
		printf("\n5.Carga forzada de datos.");
		printf("\n6.Salir");
		do{
			printf("\nIntroduzca opcion (1-6): \n");
			fflush(stdin);
			opcionValida=scanf("%d",&opcion);
			if(!opcionValida){
				printf("ERROR. Solo se permiten numeros.");
			}
		}while(opcionValida==0);

		switch(opcion){
		case 1:
			kilometraje = pedirKilometros("Ingrese los kilometros: ");
			break;
		case 2:
			pedirPrecio("\n1.Aerolineas Argentinas\n2.LATAM","Ingrese el precio para la aerolinea: ",precioAerolineas);
			break;
		case 3:
			if(precioAerolineas[0] != 0.00 && precioAerolineas[1] != 0.00 && kilometraje != 0){
				calcularCostos(resultadoCostoAeroArg, resultadoCostoLATAM, descuento, interes, precioBTC, kilometraje, precioAerolineas);
			}else{
				printf("ERROR. Se debe cargar los kilometros y el precio de las aerolineas primero.");
			}
			break;
		case 4:
			if(resultadoCostoAeroArg[0] != 0.00 && resultadoCostoLATAM[0]){
				mostrarResultados(resultadoCostoAeroArg, resultadoCostoLATAM,kilometraje);
			}else{
				printf("ERROR. Se debe calcular el precio primero.");
			}

			break;
		case 5:
			cargaForzada(precioAerolineas,resultadoCostoAeroArg, resultadoCostoLATAM);
			break;
		case 6:
			return;
		default:
			printf("ERROR. La opcion ingresada no existe.");
			break;
		}

	}while(opcion != 6);
}

/***
 * @fn void mostrarResultados()
 * @brief Imprime las opciones del menu
 * Description : La funcion recibe dos punteros float y una variable float. Muestra el valor de los punteros, y la variable kilometraje
 * @params resultadoCostoAeroArg es un puntero, tiene 5 posiciones donde cada una guarda un valor de la aerolinea
 * @params resultadoCostoLATAM es un puntero, tiene 5 posiciones donde cada una guarda un valor de la aerolinea
 * @params kilometraje recibe el kilometrraje
 */

void mostrarResultados(float *resultadoCostoAeroArg, float *resultadoCostoLATAM,float kilometraje){
	printf("\nKMs Ingresados: %.2f km",kilometraje);
	printf("\nPrecio Aerolineas Argentinas: %.2f",resultadoCostoAeroArg[0]);
	printf("\na) Precio con tarjeta de debito: %.2f",resultadoCostoAeroArg[1]);
	printf("\nb) Precio con tarjeta de credito: %.2f",resultadoCostoAeroArg[2]);
	printf("\nc) Precio con tarjeta con bitcoin: : %.12f",resultadoCostoAeroArg[3]);
	printf("\nd) Mostrar precio unitario: %.2f\n",resultadoCostoAeroArg[4]);
	printf("\nPrecio LATAM: %.2f",resultadoCostoLATAM[0]);
	printf("\na) Precio con tarjeta de debito: %.2f",resultadoCostoLATAM[1]);
	printf("\nb) Precio con tarjeta de credito: %.2f",resultadoCostoLATAM[2]);
	printf("\nc) Precio con tarjeta con bitcoin: : %.12f",resultadoCostoLATAM[3]);
	printf("\nd) Mostrar precio unitario: %.2f\n",resultadoCostoLATAM[4]);
	printf("La diferencia de precio es: %.2f\n",(resultadoCostoAeroArg[0]-resultadoCostoLATAM[0]));
}

/***
 * @fn void cargaForzada()
 * Description: La funcion hardcodea los valores de las aerolineas y los kilometros
 * @params precioAerolineas es un puntero donde se le cargan 2 valores, para las aerolineas
 * @params resultadoCostoLATAM es un puntero donde se va a cargar los precios
 * @params resultadoCostoAeroArg es un puntero donde se va a cargar los precios
 */

void cargaForzada(float *precioAerolineas,float *resultadoCostoLATAM,float *resultadoCostoAeroArg){
	float buffer = 162965;
	float buffer2 = 159339;
	float descuento = 10;
	float interes = 25;
	float precioBTC =4606954.55;
	float kilometraje = 7090;
	precioAerolineas[0] = buffer;
	precioAerolineas[1] = buffer2;
	calcularCostos(resultadoCostoAeroArg, resultadoCostoLATAM, descuento, interes, precioBTC, kilometraje, precioAerolineas);
	mostrarResultados(resultadoCostoAeroArg, resultadoCostoLATAM,kilometraje);
}

