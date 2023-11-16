/**
 *
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Asignatura: Sistemas Empotrados
 * Curso: 4º
 * Práctica 01: Libreria PWM
 * @file pwm.c
 * @author Cheuk Kelly Ng Pante (alu0101364544@ull.edu.es)
 * @author Carlos Pérez Fino (alu0101340333@ull.edu.es)
 * @brief
 * @version 0.1
 * @date
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "../include/pwm.h"

void pwm_set_clock(bool clock, int8_t factor_N, int8_t value) {

}

void pwm_set_polarity(int8_t port, bool up) {
  switch(port) {
    case 0:
      if (up == true) {
        _io_ports[M6812_PWPOL] |= M6812B_PPOL0;
      } else {
        _io_ports[M6812_PWPOL] &= ~M6812B_PPOL0;
      }
      break;
    case 1:
      if (up == true) {
        _io_ports[M6812_PWPOL] |= M6812B_PPOL1;
      } else {
        _io_ports[M6812_PWPOL] &= ~M6812B_PPOL1;
      }
      break;
    case 2:
      if (up == true) {
        _io_ports[M6812_PWPOL] |= M6812B_PPOL2;
      } else {
        _io_ports[M6812_PWPOL] &= ~M6812B_PPOL2;
      }
      break;
    case 3:
      if (up == true) {
        _io_ports[M6812_PWPOL] |= M6812B_PPOL3;
      } else {
        _io_ports[M6812_PWPOL] &= ~M6812B_PPOL3;
      }
      break;
  }
}

void pwm_set_alignment(bool left_align, int8_t select_channel) {
  // Contador PWCNTn
  if (left_align == true) { // Alineamiento a la izquierda
    // switch(select_channel) {
    //   case 0:
    //     _io_ports[M6812_PWCNT0] |= M6812B_PCLK0;

    //     if (_io_ports[M6812_PWCNT0] <= M6812_PWDTY0) {
    //       serial_print("Nivel indicado por la polaridad");
    //     } else if (_io_ports[M6812_PWCNT0] > M6812_PWDTY0) {
    //       serial_print("La polaridad es contraria");
    //     } else if (_io_ports[M6812_PWCNT0] == M6812_PWDTY0) {
    //       _io_ports[M6812_PWCNT0] = RETURN;
    //     }
		// 		break;
    //   case 1:
    //     break;
    //   case 2:
    //     break;
    //   case 3:
    //     break;
    // }
  } else { // Contador PWDTYn - Alineamiento centrado

  }
}