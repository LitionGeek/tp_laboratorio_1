/*
 * pedirDatos.c
 *
 *  Created on: 15 abr 2022
 *      Author: Alan Galvan
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pedirDatos.h"
#include "validaciones.h"

/**
 * @fn float pedirPrecio()
 * @brief Recibe dos variable del tipo char, imprime los mensajes y retorna los costos de viaje
 * @params mensajeAerolinea contiene el mensaje
 * @params mensajePrecio contiene el mensaje
 * @params precios puntero a cargar los costos de los viajes
 */
void pedirPrecio(char mensajeAerolinea[],char mensajePrecio[],float *precios){
	float buffer;
	int aerolinea;
	int aerolineaValida=1;
	int precioValido = 1;
	do{
		printf("\n%s \nIngrese la aerolinea: ",mensajeAerolinea);
		scanf("%d",&aerolinea);
		aerolineaValida = validarEntero(1,2,&aerolinea);
	}while((aerolinea>2 || aerolinea <1) && aerolineaValida !=0);
	do{
		printf("\n%s",mensajePrecio);
		fflush(stdin);
		precioValido = scanf("%f",&buffer);
		if(precioValido ==0){
			printf("ERROR. Solo se permiten numeros.");
		}
	}while(precioValido!=1);
	precios[aerolinea-1] = buffer;
}

/**
 * @fn float pedirKilometros()
 * @brief Recibe una variable del tipo char, imprime el mensaje y retorna los kilometros
 * @params mensajeKilometros contiene el mensaje
 */
float pedirKilometros(char mensajeKilometros[]){
	float bufferNum;
	int bufferNumValido;
	setbuf(stdout,NULL);
	do{
		printf("\n%s",mensajeKilometros);
		fflush(stdin);
		scanf("%f",&bufferNum);
		bufferNumValido = validarFlotante(0.0,bufferNum);
		if(bufferNumValido !=1){
			printf("ERROR. El valor del kilometro debe ser mayor a 0");
		}
	}while(bufferNumValido!=1);
	return bufferNum;
}
