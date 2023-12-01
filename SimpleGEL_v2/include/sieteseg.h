/**
 *
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Asignatura: Sistemas Empotrados
 * Curso: 4º
 * Práctica 01: Libreria PWM
 * @file A7Segmentos.c
 * @author Cheuk Kelly Ng Pante (alu0101364544@ull.edu.es)
 * @author Carlos Pérez Fino (alu0101340333@ull.edu.es)
 * @brief
 * @version 0.1
 * @date
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <gpio.h>
#include <sys/interrupts.h>
#include <sys/locks.h>
#include <sys/param.h>
#include <sys/sio.h>
#include <timer.h>
#include <types.h>

/**
 * @brief Maneja donde se muestra el valor en los 7-segmentos
 * 
 */
void manejadora();

/**
 * @brief Realiza las inicializaciones necesarias
 *
 */
void sieteSeg_init();

/**
 * @brief Recibirá un puntero a array de al menos 4 bytes. A partir de ese
 * momento se mostrará en cada 7-segmentos valor correspondiente a las primeras
 * 4 posiciones del array pasado
 *
 * @param value Puntero a array de al menos 4 bytes
 */
void sieteSeg_digitos(uint8_t* value);

/**
 * @brief Recibirá un entero y hará que se muestre su valor en decimal en los
 * 7-segmentos
 *
 * @param value Entero a mostrar en los 7-segmentos
 */
void sieteSeg_valor(uint16_t value);