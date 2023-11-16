/* sys/ports.h -- Definition of system ports
   Copyright 2000 Free Software Foundation, Inc.
   Written by Stephane Carrez (stcarrez@worldnet.fr)

This file is part of GDB, GAS, and the GNU binutils.

GDB, GAS, and the GNU binutils are free software; you can redistribute
them and/or modify them under the terms of the GNU General Public
License as published by the Free Software Foundation; either version
1, or (at your option) any later version.

GDB, GAS, and the GNU binutils are distributed in the hope that they
will be useful, but WITHOUT ANY WARRANTY; without even the implied
warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See
the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this file; see the file COPYING.  If not, write to the Free
Software Foundation, 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.  */

#ifndef _SYS_PORTS_H
#define _SYS_PORTS_H

#include <sys/ports_def.h>

#define _IO_PORTS_W(d)	(((unsigned volatile short*) & _io_ports[(d)])[0])

#if 0
extern inline unsigned short
get_timer_counter (void)
{
  return ((unsigned volatile short*) &_io_ports[M6812_TCNT_H])[0];
}

extern inline void
set_timer_counter (unsigned short value)
{
  ((unsigned volatile short*) &_io_ports[M6812_TCNT_H])[0] = value;
}

/* Set the board in the expanded mode to get access to external bus.  */
extern inline void
set_bus_expanded (void)
{
  _io_ports[M6811_HPRIO] |= M6811_MDA;
}


/* Set the board in single chip mode.  */
extern inline void
set_bus_single_chip (void)
{
  _io_ports[M6811_HPRIO] &= ~M6811_MDA;
}
#endif
/* Reset the COP.  */
extern inline void
cop_reset (void)
{
  _io_ports[M6812_COPRST] = 0x55;
  _io_ports[M6812_COPRST] = 0xAA;
}

extern inline void
cop_optional_reset (void)
{
#if defined(M6812_USE_COP) && M6812_USE_COP == 1
  cop_reset ();
#endif
}
#if 0
/* Acknowledge the timer interrupt.  */
extern inline void
timer_acknowledge (void)
{
  _io_ports[M6812_TFLG2] = M6812_RTIF;
}

/* Initialize the timer.  */
extern inline void
timer_initialize_rate (unsigned char divisor)
{
  _io_ports[M6812_TMSK2] = M6812_RTII | divisor;
}
#endif

#endif /* _SYS_PORTS_H */
