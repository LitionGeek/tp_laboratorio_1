/*
 * funcionesGenerales.h
 *
 *  Created on: 15 abr 2022
 *      Author: Alan Galvan
 */

#ifndef LIBS_FUNCIONESGENERALES_H_
#define LIBS_FUNCIONESGENERALES_H_
/***
 * @fn void mostrarMenu()
 * @brief Imprime las opciones del menu
 * Description : Se imprime 6 opciones distintas y valida el valor ingresado
 * La opciones validas son opcion > 0 y opcion < 7
 * @p
 */
void mostrarMenu();
/***
 * @fn void mostrarResultados()
 * Description : La funcion recibe dos punteros float y una variable float. Muestra el valor de los punteros, y la variable kilometraje
 * @params resultadoCostoAeroArg es un puntero, tiene 5 posiciones donde cada una guarda un valor de la aerolinea
 * @params resultadoCostoLATAM es un puntero, tiene 5 posiciones donde cada una guarda un valor de la aerolinea
 * @params kilometraje recibe el kilometrraje
 */
void mostrarResultados(float *resultadoCostoAeroArg, float *resultadoCostoLATAM, float kilometraje);

/***
 * @fn void cargaForzada()
 * Description: La funcion hardcodea los valores de las aerolineas y los kilometros
 * @params precioAerolineas es un puntero donde se le cargan 2 valores, para las aerolineas
 * @params resultadoCostoLATAM es un puntero donde se va a cargar los precios
 * @params resultadoCostoAeroArg es un puntero donde se va a cargar los precios
 */
void cargaForzada(float *precioAerolineas,float *resultadoCostoLATAM,float *resultadoCostoAeroArg);



#endif /* LIBS_FUNCIONESGENERALES_H_ */
