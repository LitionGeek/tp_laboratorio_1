/*
 * pedirDatos.h
 *
 *  Created on: 15 abr 2022
 *      Author: Alan Galvan
 */

#ifndef LIBS_PEDIRDATOS_H_
#define LIBS_PEDIRDATOS_H_

/**
 * @fn float pedirKilometros()
 * @brief Recibe una variable del tipo char, imprime el mensaje y retorna los kilometros
 * @params mensajeKilometros contiene el mensaje
 */
float pedirKilometros(char mensajeKilometros[]);

/**
 * @fn float pedirPrecio()
 * @brief Recibe dos variable del tipo char, imprime los mensajes y retorna los costos de viaje
 * @params mensajeAerolinea contiene el mensaje
 * @params mensajePrecio contiene el mensaje
 * @params precios puntero a cargar los costos de los viajes
 */
void pedirPrecio(char mensajeAerolinea[],char mensajePrecio[],float *precios);

#endif /* LIBS_PEDIRDATOS_H_ */
