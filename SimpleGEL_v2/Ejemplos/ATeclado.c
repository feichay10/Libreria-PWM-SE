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

#define PUERTOTECLADO 'H'

// Pin a la derecha libre, dejar dos a la derecha libres
//|C2|F1|C1|F4|C3|F3|F2|
#define C1 (1 << 5)  // pos 5, bit desplazado 5 veces
#define C2 (1 << 7)  // pos 7, bit desplazado 7 veces
#define C3 (1 << 3)  // pos 3, bit desplazado 3 veces

#define F1 (1 << 6)  // pos 6, bit desplazado 6 veces
#define F2 (1 << 1)  // pos 1, bit desplazado 1 veces
#define F3 (1 << 2)  // pos 2, bit desplazado 2 veces
#define F4 (1 << 4)  // pos 4, bit desplazado 4 veces

#define OP_BIT_OR_FILAS (F1 | F2 | F3 | F4)  // Mascara para filas

/**
 * @brief Realiza las inicializaciones necesarias
 *
 */
void teclado_init() { 
  gpio_setportasinout(PUERTOTECLADO, OP_BIT_OR_FILAS);
  gpio_pullupenable(PUERTOTECLADO, 1);
}

/**
 * @brief Espera a que se realice una pulsación en el teclado y devuelve código
 * ASCII de la teclas pulsada
 *
 * @return char
 */
char teclado_getchar() {
  uint8_t columna = 0;

  do {
    gpio_writeport(PUERTOTECLADO, 0);
    if (gpio_readport(PUERTOTECLADO) & F1) {
      columna = 1;
    } else if (gpio_readport(PUERTOTECLADO) & F2) {
      columna = 2;
    } else if (gpio_readport(PUERTOTECLADO) & F3) {
      columna = 3;
    } else if (gpio_readport(PUERTOTECLADO) & F4) {
      columna = 4;
    }

    timer_sleep(200); // Espera 200ms
  } while (columna == 1);
}

/**
 * @brief Espera a que se realice una pulsación en el teclado y devuelve código
 * ASCII de la tecla pulsada. Si no hay pulsación en milis milisegundos devuelve
 * el carácter 'T'.
 *
 * @param milis
 * @return char
 */
char teclado_getch_timeout(uint32_t milis) {}

int main() {}