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

#include <pwm.h>
#include <sys/interrupts.h>
#include <sys/locks.h>
#include <sys/param.h>
#include <sys/ports.h>
#include <sys/sio.h>
#include <types.h>

int main() {
  serial_init();
  serial_print(
      "\r\nTest avanzado de PWM"
      "\r\nA continuacion vamos a generar el reloj del PWM."
      "\r\nEl reloj del pwm se basa en la division del reloj"
      "\r\nbase de la placa (25Mhz)."
      "\r\nSeleciona el reloj que quieres configurar Reloj_A"
      "\r\nIntroduce 0 para reloj_A o 1 para reloj_B: ");
  int8_t reloj_a = serial_getdecbyte();
  serial_print("\r\nIntroduce el factor N valores entre 0 - 7: ");
  int8_t factor_N = serial_getdecbyte();
  pwm_set_clock(reloj_a, factor_N);
  serial_print("\r\nReloj configurado");
  serial_print("\r\nSelecciona el canal ha habilitar, 0 - 4: ");
  int8_t canal = serial_getdecbyte();
  pwm_channel_enable(canal);
  serial_print("\r\nCanal habilitado");
  serial_print("\r\nSelecciona 1 para polaridad en alta o 0 en baja: ");
  int8_t polaridad = serial_getdecbyte();
  pwm_set_polarity(canal, polaridad);
  serial_print("\r\nPolaridad configurada");
  serial_print(
      "\r\nSelecciona 1 para alineamiento a la izquierda o 0 centrado: ");
  int8_t alineamiento = serial_getdecbyte();
  pwm_set_alignment(alineamiento);
  serial_print("\r\nAlineamiento configurado");
  serial_print("\r\nIntroduce el periodo del canal: ");
  int8_t periodo = serial_getdecbyte();
  pwm_set_channel_period(canal, periodo);
  serial_print("\r\nPeriodo configurado");

  while (1) {
    serial_print("\r\nIntroduce el duty del canal: ");
    int8_t duty = serial_getdecbyte();
    pwm_modify_duty_percentage(canal, duty);
    serial_print("\r\nDuty configurado");
  }
}