/**
 *
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Asignatura: Sistemas Empotrados
 * Curso: 4º
 * Práctica 01: Libreria PWM
 * @file test_pwm_1.c
 * @author Cheuk Kelly Ng Pante (alu0101364544@ull.edu.es)
 * @author Carlos Pérez Fino (alu0101340333@ull.edu.es)
 * @brief
 * @version 0.1
 * @date
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <sys/param.h>
#include <sys/ports.h>
#include <sys/interrupts.h>
#include <types.h>
#include <sys/sio.h>
#include <sys/locks.h>
#include <pwm.h>

int main() {
  serial_init();
  pwm_print_status();

  pwm_set_clock(true, 7);
  pwm_set_polarity(0, true);
  pwm_set_alignment(true);
  pwm_set_channel_period(0, 200);
  pwm_channel_enable(0);
  pwm_channel_disable(0);
  pwm_modify_duty_percentage(0, 50);

  serial_print("\r\n\nValores tras configuración: ");
  pwm_print_status();

  while(1) {
    serial_print("\r\n Introduzca nuevo duty:");
    int8_t a =serial_getdecbyte();
    pwm_modify_duty_percentage(0, a);

    serial_print("M6812_PWCNT0: ");
    serial_printdecbyte(_io_ports[M6812_PWCNT0]);
    serial_print("\n");
    serial_print("M6812_PWPER0: ");
    serial_printdecbyte(_io_ports[M6812_PWPER0]);
    serial_print("\n");
    serial_print("M6812_PWDTY0: ");
    serial_printdecbyte(_io_ports[M6812_PWDTY0]);
    serial_print("\n");
  }
}