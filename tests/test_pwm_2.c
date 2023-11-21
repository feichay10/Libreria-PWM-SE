/**
 *
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Asignatura: Sistemas Empotrados
 * Curso: 4º
 * Práctica 01: Libreria PWM
 * @file test_pwm_2.c
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
  serial_print("Test PWM_2");
  serial_print("Registros");
  pwm_print_status();
  pwm_set_clock(true, 3);
  pwm_set_polarity(0, true);
  pwm_set_alignment(true);
  pwm_set_channel_period(0, 2);
  pwm_channel_enable(0);
  pwm_channel_disable(0);
  pwm_modify_channel_duty_steps(0, 2)
  pwm_modify_duty_percentage(0, 50) 
}