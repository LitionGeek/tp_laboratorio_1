/*
 * calcularDatos.c
 *
 *  Created on: 15 abr 2022
 *      Author: Alan Galvan
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calcularDatos.h"

/***
 * @fn float calcularCostos
 * @brief Calcula los costos de las aerolineas
 * @params resultadoCostoAeroArg es un puntero donde se carga los precios para la aerolinea
 * @params resultadoCostoLATAM es un puntero donde se carga los precios para la aerolinea
 * @params descuento contiene el descuento
 * @params interes contiene el interes
 * @params precioBTC contiene el precio de Bitcoin
 * @params kilometros contiene los kilometros
 * @params precioAerolineas es un puntero donde tiene el precio
 */
void calcularCostos(float *resultadoCostoAeroArg,float *resultadoCostoLATAM,float descuento,float interes,float precioBTC, float kilometros,float *precioAerolineas){
	printf("Calculando ando");
	resultadoCostoAeroArg[0] = precioAerolineas[0];
	resultadoCostoAeroArg[1] = calcularPrecioTD(precioAerolineas[0],descuento);
	resultadoCostoAeroArg[2] = calcularPrecioTC(precioAerolineas[0],interes);
	resultadoCostoAeroArg[3] = calcularPrecioEnBTC(precioAerolineas[0],precioBTC);
	resultadoCostoAeroArg[4] = calcularPrecioPorKM(precioAerolineas[0],kilometros);

	resultadoCostoLATAM[0] = precioAerolineas[1];
	resultadoCostoLATAM[1] = calcularPrecioTD(precioAerolineas[1],descuento);
	resultadoCostoLATAM[2] = calcularPrecioTC(precioAerolineas[1],interes);
	resultadoCostoLATAM[3] = calcularPrecioEnBTC(precioAerolineas[1],precioBTC);
	resultadoCostoLATAM[4] = calcularPrecioPorKM(precioAerolineas[1],kilometros);

	printf("%.2f",resultadoCostoLATAM[4]);
}

/***
 * @fn float calcularPrecioTD()
 * @brief Calcula el precio del pasaje a Bitcoin
 * @params precioAerolinea contiene el valor del precio
 * @descuento contiene el precio de descuento
 */
float calcularPrecioTD(float precioAerolinea,float descuento){
	float resultadoPrecio;
	resultadoPrecio = precioAerolinea-((precioAerolinea*descuento)/100);
	return resultadoPrecio;
}

/***
 * @fn float calcularPrecioTC()
 * @brief Devuelve el precio con interes
 * @params precioAerolinea contiene el valor del precio
 * @params descuento contiene el precio de interes
 */
float calcularPrecioTC(float precioAerolinea,float interes){
	float resultadoPrecio;
	resultadoPrecio = precioAerolinea+((precioAerolinea*interes)/100);
	return resultadoPrecio;
}

/***
 * @fn float calcularPrecioEnBTC()
 * @brief Devuelve el precio del pasaje a Bitcoin
 * @params precioAerolinea contiene el valor del precio
 * @params precioBTC contiene el precio de BTC
 */
float calcularPrecioEnBTC(float precioAerolinea,float precioBTC){
	float resultadoPrecio;
	resultadoPrecio = precioAerolinea/precioBTC;
	return resultadoPrecio;
}

/***
 * @fn float calcularPrecioPorKM()
 * @brief Devuelve el precio por Kilometros
 * @params precioAerolinea contiene el valor del precio
 * @descuento contiene el precio de kilometros
 */
float calcularPrecioPorKM(float precioAerolinea,float kilometros){
	float resultadoPrecio;
	resultadoPrecio = precioAerolinea/kilometros;
	return resultadoPrecio;
}
