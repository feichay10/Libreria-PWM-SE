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

#define PUERTO7 'H'

uint8_t valores[] = {1, 3, 5, 6};
int contador = 0;

void manejadora() {
  uint8_t vActual = 1 << (7 - contador);
  vActual |= valores[contador] & 0xF;

  contador++;
  // serial_print("\r\n");
  // serial_printbinbyte(vActual);
  gpio_writeport(PUERTO7, vActual);
  if (contador == 4) {
    contador = 0;
  }
}

/**
 * @brief Realiza las inicializaciones necesarias
 *
 */
void sieteSeg_init() {
  gpio_setportasinout(PUERTO7, 0xff);

  uint8_t param = 0;
  uint8_t id = timer_add_periodic_task(manejadora, &param, 1000);
}

/**
 * @brief Recibirá un puntero a array de al menos 4 bytes. A partir de ese
 * momento se mostrará en cada 7-segmentos valor correspondiente a las primeras
 * 4 posiciones del array pasado
 *
 * @param value
 */
void sieteSeg_digitos(uint8_t* value) {
  valores[0] = value[0];
  valores[1] = value[1];
  valores[2] = value[2];
  valores[3] = value[3];
}

/**
 * @brief Recibirá un entero y hará que se muestre su valor en decimal en los
 * 7-segmentos
 *
 * @param value
 */
void sieteSeg_valor(uint16_t value) {
  valores[0] = value / 1000;
  valores[1] = (value / 100) % 10;
  valores[2] = (value / 10) % 10;
  valores[3] = value % 10;
}

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