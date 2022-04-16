/*
 * calcularDatos.h
 *
 *  Created on: 15 abr 2022
 *      Author: Alan Galvan
 */

#ifndef LIBS_CALCULARDATOS_H_
#define LIBS_CALCULARDATOS_H_

/***
 * @fn float calcularPrecioEnBTC()
 * @brief Devuelve el precio del pasaje a Bitcoin
 * @params precioAerolinea contiene el valor del precio
 * @params precioBTC contiene el precio de BTC
 */
float calcularPrecioEnBTC(float precioAerolinea,float precioBTC);

/***
 * @fn float calcularPrecioTC()
 * @brief Devuelve el precio con interes
 * @params precioAerolinea contiene el valor del precio
 * @params descuento contiene el precio de interes
 */
float calcularPrecioTC(float precioAerolinea,float interes);

/***
 * @fn float calcularPrecioTD()
 * @brief Calcula el precio del pasaje a Bitcoin
 * @params precioAerolinea contiene el valor del precio
 * @descuento contiene el precio de descuento
 */
float calcularPrecioTD(float precioAerolinea,float descuento);

/***
 * @fn float calcularPrecioPorKM()
 * @brief Devuelve el precio por Kilometros
 * @params precioAerolinea contiene el valor del precio
 * @descuento contiene el precio de kilometros
 */
float calcularPrecioPorKM(float precioAerolinea,float kilometros);

/***
 * @fn float calcularCostos()
 * @brief Calcula los costos de las aerolineas
 * @params resultadoCostoAeroArg es un puntero donde se carga los precios para la aerolinea
 * @params resultadoCostoLATAM es un puntero donde se carga los precios para la aerolinea
 * @params descuento contiene el descuento
 * @params interes contiene el interes
 * @params precioBTC contiene el precio de Bitcoin
 * @params kilometros contiene los kilometros
 * @params precioAerolineas es un puntero donde tiene el precio
 */
void calcularCostos(float *resultadoCostoAeroArg,float *resultadoCostoLATAM,float descuento,float interes,float precioBTC, float kilometros,float *precioAerolineas);

/**
 * @fn float calcularDiferenciaDePrecio()
 * @brief Calcula la diferencia de precio de sos aerolineas
 * @params precioAerolineasArgentina puntero al valor de la aerolinea
 *  * @params precioLATAM  puntero al valor de la aerolinea
 */
float calcularDiferenciaDePrecio(float precioAerolineasArgentina, float precioLATAM);

#endif /* LIBS_CALCULARDATOS_H_ */
