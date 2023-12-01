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
 * @brief Realiza las inicializaciones necesarias
 * 
 */
void teclado_init() {

}

/**
 * @brief Espera a que se realice una pulsación en el teclado y devuelve código
 * ASCII de la teclas pulsada
 * 
 * @return char 
 */
char teclado_getchar() {
}

/**
 * @brief Espera a que se realice una pulsación en el teclado y devuelve código 
 * ASCII de la tecla pulsada. Si no hay pulsación en milis milisegundos devuelve
 * el carácter 'T'.
 * 
 * @param milis 
 * @return char 
 */
char teclado_getch_timeout(uint32_t milis) {

}

int main() {
  
}