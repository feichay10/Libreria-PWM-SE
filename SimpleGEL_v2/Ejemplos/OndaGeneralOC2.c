
/* ****************************************
* Salida onda general (no cuadrada) por el OC2. Se especifica periondo en
*  dos variable.

   Copyright (C) Alberto F. Hamilton Castro
   Dpto. de Ingeniería Informática de Sistemas
   Universidad de La Laguna

  Licencia: GPLv3

  *************************************** */


#include <types.h>
#include <sys/param.h>
#include <sys/interrupts.h>
#include <sys/sio.h>
#include <sys/locks.h>

#define  TCM_FACTOR (3)  /*La potencia de 2 a aplicar al factor*/
#define  TCM_FREQ (M6812_CPU_E_CLOCK/(1 << TCM_FACTOR))
/*Pasa de microsegundos a ticks*/
#define  USG_2_TICKS(us)  ((us) * (TCM_FREQ / 1000000L))
/*Pasa de milisegundos a ticks*/
#define  MSG_2_TICKS(ms)  ((ms) * (TCM_FREQ / 1000L))

/*Variables globales, compartidas por programa principal y RTI */
uint16_t PeriodoH;
uint16_t PeriodoL;

uint16_t cuenta_irqs;


int main () {

  /* Deshabilitamos interrupciones */
  lock ();

  /*Encendemos led*/
  _io_ports[M6812_DDRG] |= M6812B_PG7;
  _io_ports[M6812_PORTG] |= M6812B_PG7;


  serial_init();
  serial_print("\r\n" __FILE__ " ==========\r\n");
  /* Inicializamos variables */
  cuenta_irqs = 0;
  PeriodoL = USG_2_TICKS(5000);
  PeriodoH = USG_2_TICKS(3000);
  serial_print("\r\n Cuenta irqs: ");
  serial_printdecword(cuenta_irqs);

  /*Inicialización del Temporizador*/
  _io_ports[M6812_TMSK2] = TCM_FACTOR;
  /* OC2 Invierte el pin en cada disparo */
  _io_ports[M6812_TCTL2] &= ~M6812B_OM2;
  _io_ports[M6812_TCTL2] |= M6812B_OL2;

  /*preparamos disparo canal*/
  _IO_PORTS_W(M6812_TC2) = _IO_PORTS_W(M6812_TCNT) + PeriodoH;


  /*configuramos canal 2 como comparador salida*/
  _io_ports[M6812_TIOS] |= M6812B_IOS2;


  _io_ports[M6812_TFLG1] = M6812B_IOS2; /*Bajamos el banderín de OC2 */
  _io_ports[M6812_TMSK1] |= M6812B_IOS2; /*habilitamos sus interrupciones*/
  _io_ports[M6812_TSCR] = M6812B_TEN; /*Habilitamos temporizador*/

  unlock(); /* habilitamos interrupciones */

  serial_print("\r\nTerminada inicialización\r\n");

  while(1) {
    char c;
    c = serial_recv();

    serial_send(c);

    serial_print("\r\n\n Cuenta irqs: ");
    serial_printdecword(cuenta_irqs);

    /*Invertimos el led*/
    _io_ports[M6812_PORTG] ^= M6812B_PG7;

    if(c == '+') PeriodoH += 10;
    if(c == '-') PeriodoH -= 10;

    serial_print("\r\n usg del periodo: ");
    serial_printdecword(PeriodoH / USG_2_TICKS(1));
    serial_send(' ');
    serial_printdecword(PeriodoL / USG_2_TICKS(1));

  }

}

/* Manejador interrupciones del OC2  */
void __attribute__((interrupt)) vi_ioc2 (void) {
  _io_ports[M6812_TFLG1] = M6812B_IOS2; /*Bajamos el banderín de OC2 */

  /*preparamos siguiente disparo*/
  if(_io_ports[M6812_PORTT] & M6812B_PT2)
    _IO_PORTS_W(M6812_TC2) = _IO_PORTS_W(M6812_TC2) + PeriodoH;
  else
    _IO_PORTS_W(M6812_TC2) = _IO_PORTS_W(M6812_TC2) + PeriodoL;

  cuenta_irqs++;

}

