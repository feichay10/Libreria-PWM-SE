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

#include "../include/sieteseg.h"

#define PUERTO7 'H'

uint8_t valores[] = {1, 3, 5, 6};
int contador = 0;

void manejadora() {
  uint8_t vActual = 1 << (7 - contador);
  vActual |= valores[contador] & 0xF;
  contador++;
  gpio_writeport(PUERTO7, vActual);

  if (contador == 4) {
    contador = 0;
  }
}

void sieteSeg_init() {
  gpio_setportasinout(PUERTO7, 0xff);

  uint8_t param = 0;
  uint8_t id = timer_add_periodic_task(manejadora, &param, 1000);
}

void sieteSeg_digitos(uint8_t* value) {
  valores[0] = value[0];
  valores[1] = value[1];
  valores[2] = value[2];
  valores[3] = value[3];
}

void sieteSeg_valor(uint16_t value) {
  valores[0] = value / 1000;
  valores[1] = (value / 100) % 10;
  valores[2] = (value / 10) % 10;
  valores[3] = value % 10;
}