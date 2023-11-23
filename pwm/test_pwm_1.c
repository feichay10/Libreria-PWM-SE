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
  serial_print("\nTest PWM");
  serial_print("\n######### Registros #########");
  serial_print("\nM6812_PWCLK: ");
  serial_printbinbyte(_io_ports[M6812_PWCLK]);
  serial_print("\n");

  serial_print("PWPOL: ");
  serial_printbinbyte(_io_ports[M6812_PWPOL]);
  serial_print("\n");

  serial_print("PWPER0: ");
  serial_printbinbyte(_io_ports[M6812_PWPER0]);
  serial_print("\n");

  serial_print("PWPER1: ");
  serial_printbinbyte(_io_ports[M6812_PWPER1]);
  serial_print("\n"); 

  serial_print("PWPER2: ");
  serial_printbinbyte(_io_ports[M6812_PWPER2]);
  serial_print("\n");

  serial_print("PWPER3: ");
  serial_printbinbyte(_io_ports[M6812_PWPER3]);
  serial_print("\n");

  serial_print("PWDTY0: ");
  serial_printbinbyte(_io_ports[M6812_PWDTY0]);
  serial_print("\n");

  serial_print("PWDTY1: ");
  serial_printbinbyte(_io_ports[M6812_PWDTY1]);
  serial_print("\n");

  serial_print("PWDTY2: ");
  serial_printbinbyte(_io_ports[M6812_PWDTY2]);
  serial_print("\n");

  serial_print("PWDTY3: ");
  serial_printbinbyte(_io_ports[M6812_PWDTY3]);
  serial_print("\n");
}