/*! \file

  Programa ejemplo de manejo de la serial SCI

  Realiza el eco de lo que le llega, devolviendolo con las
  mayusculas invertidas

  Copyright (C) Alberto F. Hamilton Castro
  Dpto. de Ingeniería Informática de Sistemas
  Universidad de La Laguna

  Licencia: GPLv3

*/


#include <sys/param.h>
#include <sys/ports.h>
#include <sys/interrupts.h>
#include <types.h>

/* constante para obtener 9600 baudios en SC */
#define SC9600BAUDIOS 52
#define SC38400BAUDIOS 13


int main() {

  uint8_t tmp;

  /*Encendemos led*/
  _io_ports[M6812_DDRG] |= M6812B_PG7;
  _io_ports[M6812_PORTG] |= M6812B_PG7;

  /*Configuramos el puerto serial */
  _io_ports[M6812_SC0BDH] = SC38400BAUDIOS; //Fijamos la velocidad a 38400

  //Fijamos transmisión de 8 bits sin paridad
  _io_ports[M6812_SC0CR1] = 0;

  //Borramos todos los flags activos accediendo a SCSR y luego a SCDR
  tmp = _io_ports[M6812_SC0SR1];
  tmp = _io_ports[M6812_SC0DRL];

  //Activamos la recepción y transmisión y las interrupciones de recepcion
  _io_ports[M6812_SC0CR2] = (M6812B_RIE | M6812B_TE | M6812B_RE);

  //permitimos las interrupciones
  __asm__ __volatile__("cli");

  while(1)
    __asm__ __volatile__("wai");


}

/* Manejador interrupciones del SCI0  */
void __attribute__((interrupt))vi_sci0(void) {

  if(_io_ports[M6812_SC0SR1] & M6812B_RDRF) {
    //se recibió algo
    char c = _io_ports[M6812_SC0DRL];
    if(c >= 'A' && c <= 'Z') {
      //es mayúscula, pasamos a minuscula
      c = c - 'A' + 'a';
    } else if(c >= 'a' && c <= 'z') {
      //es minuscula, pasamos a mayúscula
      c = c - 'a' + 'A';
    }
    //emitimos caracter, modificado o no
    while(! (_io_ports[M6812_SC0SR1] & M6812B_TDRE)); //esperamos TDR vacío
    _io_ports[M6812_SC0DRL] = c;
  }

}
