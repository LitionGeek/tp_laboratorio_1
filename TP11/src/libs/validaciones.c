/*
 * validaciones.c
 *
 *  Created on: 12 abr 2022
 *      Author: LitionGeek
 */

#include <string.h>
#include <stdio.h>
#include <ctype.h>


int validarEntero(int valorMinimo, int valorMaximo,int *pValor){
	int retorno = 0;
	if(*pValor < valorMinimo || *pValor > valorMaximo){
		retorno = 1;
	}
	return retorno;
}
