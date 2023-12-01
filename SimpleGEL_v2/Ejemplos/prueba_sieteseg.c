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
#include <sieteseg.h>
#include <sys/interrupts.h>
#include <sys/locks.h>
#include <sys/sio.h>
#include <timer.h>
#include <types.h>

int main() {
  /// Deshabilitamos interrupciones
  lock();

  serial_init();
  sieteSeg_init();
  timer_init(3);  ///< factor escalado a 3 = un milisegundo
  serial_print("\r\n" __FILE__ " ==========\r\n");

  uint8_t valores_2[] = {9, 4, 1, 5};
  sieteSeg_digitos(valores_2);

  uint16_t entero = 15;
  sieteSeg_valor(entero);

  unlock();  ///< Habilitamos interrupciones

  serial_print("\r\nTerminada inicialización");

  int digActual = 0;
  while (1) {
    serial_recv();
    digActual++;
  }
}