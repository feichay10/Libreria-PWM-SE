/**
 *
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Asignatura: Sistemas Empotrados
 * Curso: 4º
 * Práctica 01: Libreria PWM
 * @file pwm.h
 * @author Cheuk Kelly Ng Pante (alu0101364544@ull.edu.es)
 * @author Carlos Pérez Fino (alu0101340333@ull.edu.es)
 * @brief
 * @version 0.1
 * @date
 *
 * @copyright Copyright (c) 2022
 *º
 */

#ifndef _PWM_H_
#define _PWM_H_

#include <types.h>
#include <sys/param.h>
#include <sys/interrupts.h>
#include <sys/sio.h>
#include <sys/locks.h>

typedef enum {false, true} bool; 

#define RETURN 0

/*! @defgroup pwm Funciones de manejo del módulo PWM
 */

/*@{*/

// Decir que pwm tiene cada uno, hay 4 pwm, 4 canales por pwm

/**
 * @brief Configurar el reloj base para un determinado canal
 * 
 * @param clock 
 * @param factor_N 
 * @param value 
 */
void pwm_set_clock(bool clock, int8_t factor_N, int8_t value);

/*Configurar la polaridad para un determinado canal*/
/**
 * @brief 
 * 
 * @param port 
 * @param up 
 */
void pwm_set_polarity(int8_t port, bool up);

/*Configurar el alineamiento para un determinado canal*/
/**
 * @brief 
 * 
 * @param align 
 * @param select_channel 
 */
void pwm_set_alignment(bool left_align, int8_t select_channel);

/*Configurar el número de etapas del periodo para un determinado canal*/
void pwm_set_period(int8_t steps, int8_t channel);

/*Habilitar un determinado canal*/
void pwm_channel_enable(int8_t channel);

/*Deshabilitar un determinado canal*/
void pwm_channel_disable(int8_t channel);

/*Modificar el ciclo de trabajo (en etapas) para un determinado canal*/
void pwm_modify_duty_steps(int8_t steps, int8_t channel);

/*Modificar el ciclo de trabajo (en porcentaje) para un determinado canal*/
void pwm_modify_duty_percentage(int8_t percentage, int8_t channel);

// /*Funcion para sacar toda la configuración del pwm*/
// void pwm_print_status();

/*@}*/


#endif // _PWM_H_
