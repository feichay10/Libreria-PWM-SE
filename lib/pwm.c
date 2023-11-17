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

#define M6812_DESPL7_3 (7 << 3)
#define M6812_DESPL7_0 ~(7 << 0)

void pwm_set_clock(bool clock, int8_t factor_N) {
  if (clock == true) {  // reloj A 
    _io_ports[M6812_PWCLK] &= M6812_DESPL7_3;
    _io_ports[M6812_PWCLK] |= (factor_N << 3);
  } else {              // reloj B
    _io_ports[M6812_PWCLK] &= M6812_DESPL7_0;
    _io_ports[M6812_PWCLK] |= (factor_N << 0);
  }
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

void pwm_set_alignment(bool left_align) {
  if (left_align == true) {  // Alineamiento a la izquierda
    _io_ports[M6812_PWCTL] |= M6812B_CENTR;
  } else {                   // Alineamiento centrado
    _io_ports[M6812_PWCTL] &= ~M6812B_CENTR;
  }
}

void pwm_set_period(int8_t steps, int8_t channel) {
  switch(channel) {
    case 0:
      _io_ports[M6812_PWPER0] = steps;
      break;
    case 1:
      _io_ports[M6812_PWPER1] = steps;
      break;
    case 2:
      _io_ports[M6812_PWPER2] = steps;
      break;
    case 3:
      _io_ports[M6812_PWPER3] = steps;
      break;
  }
}

void pwm_channel_enable(int8_t channel) {
  switch(channel) {
    case 0:
      _io_ports[M6812_PWCTL] |= M6812B_PWEN0;
      break;
    case 1:
      _io_ports[M6812_PWCTL] |= M6812B_PWEN1;
      break;
    case 2:
      _io_ports[M6812_PWCTL] |= M6812B_PWEN2;
      break;
    case 3:
      _io_ports[M6812_PWCTL] |= M6812B_PWEN3;
      break;
  } 
}

void pwm_channel_disable(int8_t channel) {
  switch(channel) {
    case 0:
      _io_ports[M6812_PWCTL] &= ~M6812B_PWEN0;
      break;
    case 1:
      _io_ports[M6812_PWCTL] &= ~M6812B_PWEN1;
      break;
    case 2:
      _io_ports[M6812_PWCTL] &= ~M6812B_PWEN2;
      break;
    case 3:
      _io_ports[M6812_PWCTL] &= ~M6812B_PWEN3;
      break;
  } 
}

void pwm_modify_duty_steps(int8_t steps, int8_t channel) {
  switch(channel) {
    case 0:
      _io_ports[M6812_PWDTY0] = steps;
      break;
    case 1:
      _io_ports[M6812_PWDTY1] = steps;
      break;
    case 2:
      _io_ports[M6812_PWDTY2] = steps;
      break;
    case 3:
      _io_ports[M6812_PWDTY3] = steps;
      break;
  }
}