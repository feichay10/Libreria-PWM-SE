/* sys/ports_def.h -- Definition of system ports
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

#ifndef _SYS_PORTS_DEF_H
#define _SYS_PORTS_DEF_H

/* Flags for the definition of the 68HC11 & 68HC12 CCR.  */
#define M6811_S_BIT     0x80	/* Stop disable */
#define M6811_X_BIT     0x40	/* X-interrupt mask */
#define M6811_H_BIT     0x20	/* Half carry flag */
#define M6811_I_BIT     0x10	/* I-interrupt mask */
#define M6811_N_BIT     0x08	/* Negative */
#define M6811_Z_BIT     0x04	/* Zero */
#define M6811_V_BIT     0x02	/* Overflow */
#define M6811_C_BIT     0x01	/* Carry */

/*
Listado completo de registros y bits sacado de lo tenemos
para ensamblador AFHC 2008-03-28
*/

/* Registro: PORTA   ****************************** */
#define M6812_PORTA   (0x0000)
#define M6812B_PA7   (1<<7)
#define M6812B_PA6   (1<<6)
#define M6812B_PA5   (1<<5)
#define M6812B_PA4   (1<<4)
#define M6812B_PA3   (1<<3)
#define M6812B_PA2   (1<<2)
#define M6812B_PA1   (1<<1)
#define M6812B_PA0   (1)

/* Registro: PORTB   ****************************** */
#define M6812_PORTB   (0x0001)
#define M6812B_PB7   (1<<7)
#define M6812B_PB6   (1<<6)
#define M6812B_PB5   (1<<5)
#define M6812B_PB4   (1<<4)
#define M6812B_PB3   (1<<3)
#define M6812B_PB2   (1<<2)
#define M6812B_PB1   (1<<1)
#define M6812B_PB0   (1)

/* Registro: DDRA   ****************************** */
#define M6812_DDRA   (0x0002)
#define M6812B_DDA7   (1<<7)
#define M6812B_DDA6   (1<<6)
#define M6812B_DDA5   (1<<5)
#define M6812B_DDA4   (1<<4)
#define M6812B_DDA3   (1<<3)
#define M6812B_DDA2   (1<<2)
#define M6812B_DDA1   (1<<1)
#define M6812B_DDA0   (1)

/* Registro: DDRB   ****************************** */
#define M6812_DDRB   (0x0003)
#define M6812B_DDB7   (1<<7)
#define M6812B_DDB6   (1<<6)
#define M6812B_DDB5   (1<<5)
#define M6812B_DDB4   (1<<4)
#define M6812B_DDB3   (1<<3)
#define M6812B_DDB2   (1<<2)
#define M6812B_DDB1   (1<<1)
#define M6812B_DDB0   (1)

/* Registro: PORTE   ****************************** */
#define M6812_PORTE   (0x0008)
#define M6812B_PE7   (1<<7)
#define M6812B_PE6   (1<<6)
#define M6812B_PE5   (1<<5)
#define M6812B_PE4   (1<<4)
#define M6812B_PE3   (1<<3)
#define M6812B_PE2   (1<<2)
#define M6812B_PE1   (1<<1)
#define M6812B_PE0   (1)

/* Registro: DDRE   ****************************** */
#define M6812_DDRE   (0x0009)
#define M6812B_DDE7   (1<<7)
#define M6812B_DDE6   (1<<6)
#define M6812B_DDE5   (1<<5)
#define M6812B_DDE4   (1<<4)
#define M6812B_DDE3   (1<<3)
#define M6812B_DDE2   (1<<2)

/* Registro: PEAR   ****************************** */
#define M6812_PEAR   (0x000A)
#define M6812B_NDBE   (1<<7)
#define M6812B_CGMTE   (1<<6)
#define M6812B_PIPOE   (1<<5)
#define M6812B_NECLK   (1<<4)
#define M6812B_LSTRE   (1<<3)
#define M6812B_RDWE   (1<<2)
#define M6812B_CALE   (1<<1)
#define M6812B_DBENE   (1)

/* Registro: MODE   ****************************** */
#define M6812_MODE   (0x000B)
#define M6812B_SMODN   (1<<7)
#define M6812B_MODB   (1<<6)
#define M6812B_MODA   (1<<5)
#define M6812B_ESTR   (1<<4)
#define M6812B_IVIS   (1<<3)
#define M6812B_EBSWAI   (1<<2)
#define M6812B_EME   (1)

/* Registro: PUCR   ****************************** */
#define M6812_PUCR   (0x000C)
#define M6812B_PUPH   (1<<7)
#define M6812B_PUPG   (1<<6)
#define M6812B_PUPE   (1<<4)
#define M6812B_PUPB   (1<<1)
#define M6812B_PUPA   (1)

/* Registro: RDRIV   ****************************** */
#define M6812_RDRIV   (0x000D)
#define M6812B_RDPH   (1<<6)
#define M6812B_RDPG   (1<<5)
#define M6812B_RDPE   (1<<3)
#define M6812B_RDPB   (1<<1)
#define M6812B_RDPA   (1)

/* Registro: INITRM   ****************************** */
#define M6812_INITRM   (0x0010)
#define M6812B_RAM15   (1<<7)
#define M6812B_RAM14   (1<<6)
#define M6812B_RAM13   (1<<5)
#define M6812B_RAM12   (1<<4)
#define M6812B_RAM11   (1<<3)

/* Registro: INITRG   ****************************** */
#define M6812_INITRG   (0x0011)
#define M6812B_REG15   (1<<7)
#define M6812B_REG14   (1<<6)
#define M6812B_REG13   (1<<5)
#define M6812B_REG12   (1<<4)
#define M6812B_REG11   (1<<3)
#define M6812B_MMSWAI   (1)

/* Registro: INITEE   ****************************** */
#define M6812_INITEE   (0x0012)
#define M6812B_EE15   (1<<7)
#define M6812B_EE14   (1<<6)
#define M6812B_EE13   (1<<5)
#define M6812B_EE12   (1<<4)
#define M6812B_EEON   (1)

/* Registro: MISC   ****************************** */
#define M6812_MISC   (0x0013)
#define M6812B_MAPROM   (1<<7)
#define M6812B_NDRF   (1<<6)
#define M6812B_RFSTR1   (1<<5)
#define M6812B_RFSTR0   (1<<4)
#define M6812B_EXSTR1   (1<<3)
#define M6812B_EXSTR0   (1<<2)
#define M6812B_ROMON28   (1<<1)
#define M6812B_ROMON32   (1)

/* Registro: RTICTL   ****************************** */
#define M6812_RTICTL   (0x0014)
#define M6812B_RTIE   (1<<7)
#define M6812B_RSWAI   (1<<6)
#define M6812B_RSBCK   (1<<5)
#define M6812B_RTBYP   (1<<3)
#define M6812B_RTR2   (1<<2)
#define M6812B_RTR1   (1<<1)
#define M6812B_RTR0   (1)

/* Registro: RTIFLG   ****************************** */
#define M6812_RTIFLG   (0x0015)
#define M6812B_RTIF   (1<<7)

/* Registro: COPCTL   ****************************** */
#define M6812_COPCTL   (0x0016)
#define M6812B_CME   (1<<7)
#define M6812B_FCME   (1<<6)
#define M6812B_FCMCOP   (1<<5)
#define M6812B_WCOP   (1<<4)
#define M6812B_DISR   (1<<3)
#define M6812B_CR2   (1<<2)
#define M6812B_CR1   (1<<1)
#define M6812B_CR0   (1)

/* Registro: COPRST   ****************************** */
#define M6812_COPRST   (0x0017)

/* Registro: INTCR   ****************************** */
#define M6812_INTCR   (0x001E)
#define M6812B_IRQE   (1<<7)
#define M6812B_IRQEN   (1<<6)
#define M6812B_DLY   (1<<5)

/* Registro: HPRIO   ****************************** */
#define M6812_HPRIO   (0x001F)
#define M6812B_PSEL5   (1<<5)
#define M6812B_PSEL4   (1<<4)
#define M6812B_PSEL3   (1<<3)
#define M6812B_PSEL2   (1<<2)
#define M6812B_PSEL1   (1<<1)

/* Registro: BRKCT0   ****************************** */
#define M6812_BRKCT0   (0x0020)
#define M6812B_BKEN1   (1<<7)
#define M6812B_BKEN0   (1<<6)
#define M6812B_BKPM   (1<<5)
#define M6812B_BK1ALE   (1<<3)
#define M6812B_BK0ALE   (1<<2)

/* Registro: BRKCT1   ****************************** */
#define M6812_BRKCT1   (0x0021)
#define M6812B_BKDBE   (1<<6)
#define M6812B_BKMBH   (1<<5)
#define M6812B_BKMBL   (1<<4)
#define M6812B_BK1RWE   (1<<3)
#define M6812B_BK1RW   (1<<2)
#define M6812B_BK0RWE   (1<<1)
#define M6812B_BK0RW   (1)

/* Registro: BRKAH   ****************************** */
#define M6812_BRKAH   (0x0022)

/* Registro: BRKAL   ****************************** */
#define M6812_BRKAL   (0x0023)

/* Registro: BRKDH   ****************************** */
#define M6812_BRKDH   (0x0024)

/* Registro: BRKDL   ****************************** */
#define M6812_BRKDL   (0x0025)

/* Registro: PORTG   ****************************** */
#define M6812_PORTG   (0x0028)
#define M6812B_PG7   (1<<7)
#define M6812B_PG6   (1<<6)
#define M6812B_PG5   (1<<5)
#define M6812B_PG4   (1<<4)
#define M6812B_PG3   (1<<3)
#define M6812B_PG2   (1<<2)
#define M6812B_PG1   (1<<1)
#define M6812B_PG0   (1)

/* Registro: PORTH   ****************************** */
#define M6812_PORTH   (0x0029)
#define M6812B_PH7   (1<<7)
#define M6812B_PH6   (1<<6)
#define M6812B_PH5   (1<<5)
#define M6812B_PH4   (1<<4)
#define M6812B_PH3   (1<<3)
#define M6812B_PH2   (1<<2)
#define M6812B_PH1   (1<<1)
#define M6812B_PH0   (1)

/* Registro: DDRG   ****************************** */
#define M6812_DDRG   (0x002A)
#define M6812B_DDG7   (1<<7)
#define M6812B_DDG6   (1<<6)
#define M6812B_DDG5   (1<<5)
#define M6812B_DDG4   (1<<4)
#define M6812B_DDG3   (1<<3)
#define M6812B_DDG2   (1<<2)
#define M6812B_DDG1   (1<<1)
#define M6812B_DDG0   (1)

/* Registro: DDRH   ****************************** */
#define M6812_DDRH   (0x002B)
#define M6812B_DDH7   (1<<7)
#define M6812B_DDH6   (1<<6)
#define M6812B_DDH5   (1<<5)
#define M6812B_DDH4   (1<<4)
#define M6812B_DDH3   (1<<3)
#define M6812B_DDH2   (1<<2)
#define M6812B_DDH1   (1<<1)
#define M6812B_DDH0   (1)

/* Registro: KWIEG   ****************************** */
#define M6812_KWIEG   (0x002C)
#define M6812B_WI2CE   (1<<7)
#define M6812B_KWIEG6   (1<<6)
#define M6812B_KWIEG5   (1<<5)
#define M6812B_KWIEG4   (1<<4)
#define M6812B_KWIEG3   (1<<3)
#define M6812B_KWIEG2   (1<<2)
#define M6812B_KWIEG1   (1<<1)
#define M6812B_KWIEG0   (1)

/* Registro: KWIEH   ****************************** */
#define M6812_KWIEH   (0x002D)
#define M6812B_KWIEH7   (1<<7)
#define M6812B_KWIEH6   (1<<6)
#define M6812B_KWIEH5   (1<<5)
#define M6812B_KWIEH4   (1<<4)
#define M6812B_KWIEH3   (1<<3)
#define M6812B_KWIEH2   (1<<2)
#define M6812B_KWIEH1   (1<<1)
#define M6812B_KWIEH0   (1)

/* Registro: KWIFG   ****************************** */
#define M6812_KWIFG   (0x002E)
#define M6812B_KWIFG6   (1<<6)
#define M6812B_KWIFG5   (1<<5)
#define M6812B_KWIFG4   (1<<4)
#define M6812B_KWIFG3   (1<<3)
#define M6812B_KWIFG2   (1<<2)
#define M6812B_KWIFG1   (1<<1)
#define M6812B_KWIFG0   (1)

/* Registro: KWIFH   ****************************** */
#define M6812_KWIFH   (0x002F)
#define M6812B_KWIFH7   (1<<7)
#define M6812B_KWIFH6   (1<<6)
#define M6812B_KWIFH5   (1<<5)
#define M6812B_KWIFH4   (1<<4)
#define M6812B_KWIFH3   (1<<3)
#define M6812B_KWIFH2   (1<<2)
#define M6812B_KWIFH1   (1<<1)
#define M6812B_KWIFH0   (1)

/* Registro: SYNR   ****************************** */
#define M6812_SYNR   (0x0038)
#define M6812B_SYN5   (1<<5)
#define M6812B_SYN4   (1<<4)
#define M6812B_SYN3   (1<<3)
#define M6812B_SYN2   (1<<2)
#define M6812B_SYN1   (1<<1)
#define M6812B_SYN0   (1)

/* Registro: REFDV   ****************************** */
#define M6812_REFDV   (0x0039)
#define M6812B_REFDV2   (1<<2)
#define M6812B_REFDV1   (1<<1)
#define M6812B_REFDV0   (1)

/* Registro: PLLFLG   ****************************** */
#define M6812_PLLFLG   (0x003B)
#define M6812B_LOCKIF   (1<<7)
#define M6812B_PLLLOCK   (1<<6)
#define M6812B_LHIF   (1<<1)
#define M6812B_LHOME   (1)

/* Registro: PLLCR   ****************************** */
#define M6812_PLLCR   (0x003C)
#define M6812B_LOCKIE   (1<<7)
#define M6812B_PLLON   (1<<6)
#define M6812B_AUTO   (1<<5)
#define M6812B_ACQ   (1<<4)
#define M6812B_PSTP   (1<<2)
#define M6812B_LHIE   (1<<1)
#define M6812B_NOLHM   (1)

/* Registro: CLKSEL   ****************************** */
#define M6812_CLKSEL   (0x003D)
#define M6812B_BCSP   (1<<6)
#define M6812B_BCSS   (1<<5)
#define M6812B_MCS   (1<<2)

/* Registro: SLOW   ****************************** */
#define M6812_SLOW   (0x003E)
#define M6812B_SLDV5   (1<<5)
#define M6812B_SLDV4   (1<<4)
#define M6812B_SLDV3   (1<<3)
#define M6812B_SLDV2   (1<<2)
#define M6812B_SLDV1   (1<<1)
#define M6812B_SLDV0   (1)

/* Registro: PWCLK   ****************************** */
#define M6812_PWCLK   (0x0040)
#define M6812B_CON23   (1<<7)
#define M6812B_CON01   (1<<6)
#define M6812B_PCKA2   (1<<5)
#define M6812B_PCKA1   (1<<4)
#define M6812B_PCKA0   (1<<3)
#define M6812B_PCKB2   (1<<2)
#define M6812B_PCKB1   (1<<1)
#define M6812B_PCKB0   (1)

/* Registro: PWPOL   ****************************** */
#define M6812_PWPOL   (0x0041)
#define M6812B_PCLK3   (1<<7)
#define M6812B_PCLK2   (1<<6)
#define M6812B_PCLK1   (1<<5)
#define M6812B_PCLK0   (1<<4)
#define M6812B_PPOL3   (1<<3)
#define M6812B_PPOL2   (1<<2)
#define M6812B_PPOL1   (1<<1)
#define M6812B_PPOL0   (1)

/* Registro: PWEN   ****************************** */
#define M6812_PWEN   (0x0042)
#define M6812B_PWEN3   (1<<3)
#define M6812B_PWEN2   (1<<2)
#define M6812B_PWEN1   (1<<1)
#define M6812B_PWEN0   (1)

/* Registro: PWPRES   ****************************** */
#define M6812_PWPRES   (0x0043)

/* Registro: PWSCAL0   ****************************** */
#define M6812_PWSCAL0   (0x0044)

/* Registro: PWSCNT0   ****************************** */
#define M6812_PWSCNT0   (0x0045)

/* Registro: PWSCAL1   ****************************** */
#define M6812_PWSCAL1   (0x0046)

/* Registro: PWSCNT1   ****************************** */
#define M6812_PWSCNT1   (0x0047)

/* Registro: PWCNT0   ****************************** */
#define M6812_PWCNT0   (0x0048)

/* Registro: PWCNT1   ****************************** */
#define M6812_PWCNT1   (0x0049)

/* Registro: PWCNT2   ****************************** */
#define M6812_PWCNT2   (0x004A)

/* Registro: PWCNT3   ****************************** */
#define M6812_PWCNT3   (0x004B)

/* Registro: PWPER0   ****************************** */
#define M6812_PWPER0   (0x004C)

/* Registro: PWPER1   ****************************** */
#define M6812_PWPER1   (0x004D)

/* Registro: PWPER2   ****************************** */
#define M6812_PWPER2   (0x004E)

/* Registro: PWPER3   ****************************** */
#define M6812_PWPER3   (0x004F)

/* Registro: PWDTY0   ****************************** */
#define M6812_PWDTY0   (0x0050)

/* Registro: PWDTY1   ****************************** */
#define M6812_PWDTY1   (0x0051)

/* Registro: PWDTY2   ****************************** */
#define M6812_PWDTY2   (0x0052)

/* Registro: PWDTY3   ****************************** */
#define M6812_PWDTY3   (0x0053)

/* Registro: PWCTL   ****************************** */
#define M6812_PWCTL   (0x0054)
#define M6812B_PSWAI   (1<<4)
#define M6812B_CENTR   (1<<3)
#define M6812B_RDPP   (1<<2)
#define M6812B_PUPP   (1<<1)
#define M6812B_PSBCK   (1)

/* Registro: PWTST   ****************************** */
#define M6812_PWTST   (0x0055)
#define M6812B_DISCR   (1<<7)
#define M6812B_DISCP   (1<<6)
#define M6812B_DISCAL   (1<<5)

/* Registro: PORTP   ****************************** */
#define M6812_PORTP   (0x0056)
#define M6812B_PP7   (1<<7)
#define M6812B_PP6   (1<<6)
#define M6812B_PP5   (1<<5)
#define M6812B_PP4   (1<<4)
#define M6812B_PP3   (1<<3)
#define M6812B_PP2   (1<<2)
#define M6812B_PP1   (1<<1)
#define M6812B_PP0   (1)

/* Registro: DDRP   ****************************** */
#define M6812_DDRP   (0x0057)
#define M6812B_DDP7   (1<<7)
#define M6812B_DDP6   (1<<6)
#define M6812B_DDP5   (1<<5)
#define M6812B_DDP4   (1<<4)
#define M6812B_DDP3   (1<<3)
#define M6812B_DDP2   (1<<2)
#define M6812B_DDP1   (1<<1)
#define M6812B_DDP0   (1)

/* Registro: ATD0CTL0   ****************************** */
#define M6812_ATD0CTL0   (0x0060)

/* Registro: ATD0CTL1   ****************************** */
#define M6812_ATD0CTL1   (0x0061)

/* Registro: ATD0CTL2   ****************************** */
#define M6812_ATD0CTL2   (0x0062)
#define M6812B_ADPU   (1<<7)
#define M6812B_AFFC   (1<<6)
#define M6812B_ASWAI   (1<<5)
#define M6812B_DJM   (1<<4)
#define M6812B_ASCIE   (1<<1)
#define M6812B_ASCIF   (1)

/* Registro: ATD0CTL3   ****************************** */
#define M6812_ATD0CTL3   (0x0063)
#define M6812B_S1C   (1<<3)
#define M6812B_FIFO   (1<<2)
#define M6812B_FRZ1   (1<<1)
#define M6812B_FRZ0   (1)

/* Registro: ATD0CTL4   ****************************** */
#define M6812_ATD0CTL4   (0x0064)
#define M6812B_RES10   (1<<7)
#define M6812B_SMP1   (1<<6)
#define M6812B_SMP0   (1<<5)
#define M6812B_PRS4   (1<<4)
#define M6812B_PRS3   (1<<3)
#define M6812B_PRS2   (1<<2)
#define M6812B_PRS1   (1<<1)
#define M6812B_PRS0   (1)

/* Registro: ATD0CTL5   ****************************** */
#define M6812_ATD0CTL5   (0x0065)
#define M6812B_S8C   (1<<6)
#define M6812B_SCAN   (1<<5)
#define M6812B_MULT   (1<<4)
#define M6812B_SC   (1<<3)
#define M6812B_CC   (1<<2)
#define M6812B_CB   (1<<1)
#define M6812B_CA   (1)

/* Registro: ATD0STAT0   ****************************** */
#define M6812_ATD0STAT0   (0x0066)
#define M6812B_SCF   (1<<7)
#define M6812B_CC2   (1<<2)
#define M6812B_CC1   (1<<1)
#define M6812B_CC0   (1)

/* Registro: ATD0STAT1   ****************************** */
#define M6812_ATD0STAT1   (0x0067)
#define M6812B_CCF7   (1<<7)
#define M6812B_CCF6   (1<<6)
#define M6812B_CCF5   (1<<5)
#define M6812B_CCF4   (1<<4)
#define M6812B_CCF3   (1<<3)
#define M6812B_CCF2   (1<<2)
#define M6812B_CCF1   (1<<1)
#define M6812B_CCF0   (1)

/* Registro: ATD0TESTH   ****************************** */
#define M6812_ATD0TESTH   (0x0068)
#define M6812B_SAR9   (1<<7)
#define M6812B_SAR8   (1<<6)
#define M6812B_SAR7   (1<<5)
#define M6812B_SAR6   (1<<4)
#define M6812B_SAR5   (1<<3)
#define M6812B_SAR4   (1<<2)
#define M6812B_SAR3   (1<<1)
#define M6812B_SAR2   (1)

/* Registro: ATD0TESTL   ****************************** */
#define M6812_ATD0TESTL   (0x0069)
#define M6812B_SAR1   (1<<7)
#define M6812B_SAR0   (1<<6)
#define M6812B_RST   (1<<5)
#define M6812B_TSTOUT   (1<<4)
#define M6812B_TST3   (1<<3)
#define M6812B_TST2   (1<<2)
#define M6812B_TST1   (1<<1)
#define M6812B_TST0   (1)

/* Registro: PORTAD0   ****************************** */
#define M6812_PORTAD0   (0x006F)
#define M6812B_PAD07   (1<<7)
#define M6812B_PAD06   (1<<6)
#define M6812B_PAD05   (1<<5)
#define M6812B_PAD04   (1<<4)
#define M6812B_PAD03   (1<<3)
#define M6812B_PAD02   (1<<2)
#define M6812B_PAD01   (1<<1)
#define M6812B_PAD00   (1)

/* Registro: ADR00H   ****************************** */
#define M6812_ADR00H   (0x0070)

/* Registro: ADR00L   ****************************** */
#define M6812_ADR00L   (0x0071)

/* Registro: ADR01H   ****************************** */
#define M6812_ADR01H   (0x0072)

/* Registro: ADR01L   ****************************** */
#define M6812_ADR01L   (0x0073)

/* Registro: ADR02H   ****************************** */
#define M6812_ADR02H   (0x0074)

/* Registro: ADR02L   ****************************** */
#define M6812_ADR02L   (0x0075)

/* Registro: ADR03H   ****************************** */
#define M6812_ADR03H   (0x0076)

/* Registro: ADR03L   ****************************** */
#define M6812_ADR03L   (0x0077)

/* Registro: ADR04H   ****************************** */
#define M6812_ADR04H   (0x0078)

/* Registro: ADR04L   ****************************** */
#define M6812_ADR04L   (0x0079)

/* Registro: ADR05H   ****************************** */
#define M6812_ADR05H   (0x007A)

/* Registro: ADR05L   ****************************** */
#define M6812_ADR05L   (0x007B)

/* Registro: ADR06H   ****************************** */
#define M6812_ADR06H   (0x007C)

/* Registro: ADR06L   ****************************** */
#define M6812_ADR06L   (0x007D)

/* Registro: ADR07H   ****************************** */
#define M6812_ADR07H   (0x007E)

/* Registro: ADR07L   ****************************** */
#define M6812_ADR07L   (0x007F)

/* Registro: TIOS   ****************************** */
#define M6812_TIOS   (0x0080)
#define M6812B_IOS7   (1<<7)
#define M6812B_IOS6   (1<<6)
#define M6812B_IOS5   (1<<5)
#define M6812B_IOS4   (1<<4)
#define M6812B_IOS3   (1<<3)
#define M6812B_IOS2   (1<<2)
#define M6812B_IOS1   (1<<1)
#define M6812B_IOS0   (1)

/* Registro: CFORC   ****************************** */
#define M6812_CFORC   (0x0081)
#define M6812B_FOC7   (1<<7)
#define M6812B_FOC6   (1<<6)
#define M6812B_FOC5   (1<<5)
#define M6812B_FOC4   (1<<4)
#define M6812B_FOC3   (1<<3)
#define M6812B_FOC2   (1<<2)
#define M6812B_FOC1   (1<<1)
#define M6812B_FOC0   (1)

/* Registro: OC7M   ****************************** */
#define M6812_OC7M   (0x0082)
#define M6812B_OC7M7   (1<<7)
#define M6812B_OC7M6   (1<<6)
#define M6812B_OC7M5   (1<<5)
#define M6812B_OC7M4   (1<<4)
#define M6812B_OC7M3   (1<<3)
#define M6812B_OC7M2   (1<<2)
#define M6812B_OC7M1   (1<<1)
#define M6812B_OC7M0   (1)

/* Registro: OC7D   ****************************** */
#define M6812_OC7D   (0x0083)
#define M6812B_OC7D7   (1<<7)
#define M6812B_OC7D6   (1<<6)
#define M6812B_OC7D5   (1<<5)
#define M6812B_OC7D4   (1<<4)
#define M6812B_OC7D3   (1<<3)
#define M6812B_OC7D2   (1<<2)
#define M6812B_OC7D1   (1<<1)
#define M6812B_OC7D0   (1)

/* Registro: TCNT   ****************************** */
#define M6812_TCNT   (0x0084)


/* Registro: TSCR   ****************************** */
#define M6812_TSCR   (0x0086)
#define M6812B_TEN   (1<<7)
#define M6812B_TSWAI   (1<<6)
#define M6812B_TSBCK   (1<<5)
#define M6812B_TFFCA   (1<<4)


/* Registro: TCTL1   ****************************** */
#define M6812_TCTL1   (0X0088)
#define M6812B_OM7   (1<<7)
#define M6812B_OL7   (1<<6)
#define M6812B_OM6   (1<<5)
#define M6812B_OL6   (1<<4)
#define M6812B_OM5   (1<<3)
#define M6812B_OL5   (1<<2)
#define M6812B_OM4   (1<<1)
#define M6812B_OL4   (1)

/* Registro: TCTL2   ****************************** */
#define M6812_TCTL2   (0x0089)
#define M6812B_OM3   (1<<7)
#define M6812B_OL3   (1<<6)
#define M6812B_OM2   (1<<5)
#define M6812B_OL2   (1<<4)
#define M6812B_OM1   (1<<3)
#define M6812B_OL1   (1<<2)
#define M6812B_OM0   (1<<1)
#define M6812B_OL0   (1)

/* Registro: TCTL3   ****************************** */
#define M6812_TCTL3   (0x008A)
#define M6812B_EDG7B   (1<<7)
#define M6812B_EDG7A   (1<<6)
#define M6812B_EDG6B   (1<<5)
#define M6812B_EDG6A   (1<<4)
#define M6812B_EDG5B   (1<<3)
#define M6812B_EDG5A   (1<<2)
#define M6812B_EDG4B   (1<<1)
#define M6812B_EDG4A   (1)

/* Registro: TCTL4   ****************************** */
#define M6812_TCTL4   (0x008B)
#define M6812B_EDG3B   (1<<7)
#define M6812B_EDG3A   (1<<6)
#define M6812B_EDG2B   (1<<5)
#define M6812B_EDG2A   (1<<4)
#define M6812B_EDG1B   (1<<3)
#define M6812B_EDG1A   (1<<2)
#define M6812B_EDG0B   (1<<1)
#define M6812B_EDG0A   (1)

/* Registro: TMSK1   ****************************** */
#define M6812_TMSK1   (0x008C)
#define M6812B_C7I   (1<<7)
#define M6812B_C6I   (1<<6)
#define M6812B_C5I   (1<<5)
#define M6812B_C4I   (1<<4)
#define M6812B_C3I   (1<<3)
#define M6812B_C2I   (1<<2)
#define M6812B_C1I   (1<<1)
#define M6812B_C0I   (1)

/* Registro: TMSK2   ****************************** */
#define M6812_TMSK2   (0x008D)
#define M6812B_TOI   (1<<7)
#define M6812B_PUPT   (1<<5)
#define M6812B_RDPT   (1<<4)
#define M6812B_TCRE   (1<<3)
#define M6812B_PR2   (1<<2)
#define M6812B_PR1   (1<<1)
#define M6812B_PR0   (1)

/* Registro: TFLG1   ****************************** */
#define M6812_TFLG1   (0x008E)
#define M6812B_C7F   (1<<7)
#define M6812B_C6F   (1<<6)
#define M6812B_C5F   (1<<5)
#define M6812B_C4F   (1<<4)
#define M6812B_C3F   (1<<3)
#define M6812B_C2F   (1<<2)
#define M6812B_C1F   (1<<1)
#define M6812B_C0F   (1)

/* Registro: TFLG2   ****************************** */
#define M6812_TFLG2   (0x008F)
#define M6812B_TOF   (1<<7)

/* Registro: TC0   ****************************** */
#define M6812_TC0   (0x0090)

/* Registro: TC1   ****************************** */
#define M6812_TC1   (0x0092)

/* Registro: TC2   ****************************** */
#define M6812_TC2   (0x0094)

/* Registro: TC3   ****************************** */
#define M6812_TC3   (0x0096)

/* Registro: TC4   ****************************** */
#define M6812_TC4   (0x0098)

/* Registro: TC5   ****************************** */
#define M6812_TC5   (0x009A)

/* Registro: TC6   ****************************** */
#define M6812_TC6   (0x009C)

/* Registro: TC7   ****************************** */
#define M6812_TC7   (0x009E)

/* Registro: PACTL   ****************************** */
#define M6812_PACTL   (0x00A0)
#define M6812B_PAEN   (1<<6)
#define M6812B_PAMOD   (1<<5)
#define M6812B_PEDGE   (1<<4)
#define M6812B_CLK1   (1<<3)
#define M6812B_CLK0   (1<<2)
#define M6812B_PAOVI   (1<<1)
#define M6812B_PAI   (1)

/* Registro: PAFLG   ****************************** */
#define M6812_PAFLG   (0x00A1)
#define M6812B_PAOVF   (1<<1)
#define M6812B_PAIF   (1)

/* Registro: PACN3   ****************************** */
#define M6812_PACN3   (0x00A2)

/* Registro: PACN2   ****************************** */
#define M6812_PACN2   (0x00A3)

/* Registro: PACN1   ****************************** */
#define M6812_PACN1   (0x00A4)

/* Registro: PACN0   ****************************** */
#define M6812_PACN0   (0x00A5)

/* Registro: MCCTL   ****************************** */
#define M6812_MCCTL   (0x00A6)
#define M6812B_MCZI   (1<<7)
#define M6812B_MODMC   (1<<6)
#define M6812B_RDMCL   (1<<5)
#define M6812B_ICLAT   (1<<4)
#define M6812B_FLMC   (1<<3)
#define M6812B_MCEN   (1<<2)
#define M6812B_MCPR1   (1<<1)
#define M6812B_MCPR0   (1)

/* Registro: MCFLG   ****************************** */
#define M6812_MCFLG   (0x00A7)
#define M6812B_MCZF   (1<<7)
#define M6812B_POLF3   (1<<3)
#define M6812B_POLF2   (1<<2)
#define M6812B_POLF1   (1<<1)
#define M6812B_POLF0   (1)

/* Registro: ICPACR   ****************************** */
#define M6812_ICPACR   (0x00A8)
#define M6812B_PA3EN   (1<<3)
#define M6812B_PA2EN   (1<<2)
#define M6812B_PA1EN   (1<<1)
#define M6812B_PA0EN   (1)

/* Registro: DLYCT   ****************************** */
#define M6812_DLYCT   (0x00A9)
#define M6812B_DLY1   (1<<1)
#define M6812B_DLY0   (1)

/* Registro: ICOVW   ****************************** */
#define M6812_ICOVW   (0x00AA)
#define M6812B_NOVW7   (1<<7)
#define M6812B_NOVW6   (1<<6)
#define M6812B_NOVW5   (1<<5)
#define M6812B_NOVW4   (1<<4)
#define M6812B_NOVW3   (1<<3)
#define M6812B_NOVW2   (1<<2)
#define M6812B_NOVW1   (1<<1)
#define M6812B_NOVW0   (1)

/* Registro: ICSYS   ****************************** */
#define M6812_ICSYS   (0x00AB)
#define M6812B_SH37   (1<<7)
#define M6812B_SH26   (1<<6)
#define M6812B_SH15   (1<<5)
#define M6812B_SH04   (1<<4)
#define M6812B_TFMOD   (1<<3)
#define M6812B_PACMX   (1<<2)
#define M6812B_BUFEN   (1<<1)
#define M6812B_LATQ   (1)

/* Registro: TIMTST   ****************************** */
#define M6812_TIMTST   (0x00AD)
#define M6812B_TCBYP   (1<<1)

/* Registro: PORTT   ****************************** */
#define M6812_PORTT   (0x00AE)
#define M6812B_PT7   (1<<7)
#define M6812B_PT6   (1<<6)
#define M6812B_PT5   (1<<5)
#define M6812B_PT4   (1<<4)
#define M6812B_PT3   (1<<3)
#define M6812B_PT2   (1<<2)
#define M6812B_PT1   (1<<1)
#define M6812B_PT0   (1)

/* Registro: DDRT   ****************************** */
#define M6812_DDRT   (0x00AF)
#define M6812B_DDT7   (1<<7)
#define M6812B_DDT6   (1<<6)
#define M6812B_DDT5   (1<<5)
#define M6812B_DDT4   (1<<4)
#define M6812B_DDT3   (1<<3)
#define M6812B_DDT2   (1<<2)
#define M6812B_DDT1   (1<<1)
#define M6812B_DDT0   (1)

/* Registro: PBCTL   ****************************** */
#define M6812_PBCTL   (0x00B0)
#define M6812B_PBEN   (1<<6)
#define M6812B_PBOVI   (1<<1)

/* Registro: PBFLG   ****************************** */
#define M6812_PBFLG   (0x00B1)
#define M6812B_PBOVF   (1<<1)

/* Registro: PA3H   ****************************** */
#define M6812_PA3H   (0x00B2)

/* Registro: PA2H   ****************************** */
#define M6812_PA2H   (0x00B3)

/* Registro: PA1H   ****************************** */
#define M6812_PA1H   (0x00B4)

/* Registro: PA0H   ****************************** */
#define M6812_PA0H   (0x00B5)

/* Registro: MCCNTH   ****************************** */
#define M6812_MCCNTH   (0x00B6)

/* Registro: MCCNTL   ****************************** */
#define M6812_MCCNTL   (0x00B7)

/* Registro: TC0H   ****************************** */
#define M6812_TC0H   (0x00B8)

/* Registro: TC1H   ****************************** */
#define M6812_TC1H   (0x00BA)

/* Registro: TC2H   ****************************** */
#define M6812_TC2H   (0x00BC)


/* Registro: TC3H   ****************************** */
#define M6812_TC3H   (0x00BE)

/* Registro: SC0BDH   ****************************** */
#define M6812_SC0BDH   (0x00C0)

/* Registro: SC0BDL   ****************************** */
#define M6812_SC0BDL   (0x00C1)


/* Registro: SC0CR1   ****************************** */
#define M6812_SC0CR1   (0x00C2)
#define M6812B_LOOPS   (1<<7)
#define M6812B_WOMS   (1<<6)
#define M6812B_RSRC   (1<<5)
#define M6812B_M   (1<<4)
#define M6812B_WAKE   (1<<3)
#define M6812B_ILT   (1<<2)
#define M6812B_PE   (1<<1)
#define M6812B_PT   (1)

/* Registro: SC0CR2   ****************************** */
#define M6812_SC0CR2   (0x00C3)
#define M6812B_TIE   (1<<7)
#define M6812B_TCIE   (1<<6)
#define M6812B_RIE   (1<<5)
#define M6812B_ILIE   (1<<4)
#define M6812B_TE   (1<<3)
#define M6812B_RE   (1<<2)
#define M6812B_RWU   (1<<1)
#define M6812B_SBK   (1)

/* Registro: SC0SR1   ****************************** */
#define M6812_SC0SR1   (0x00C4)
#define M6812B_TDRE   (1<<7)
#define M6812B_TC   (1<<6)
#define M6812B_RDRF   (1<<5)
#define M6812B_IDLE   (1<<4)
#define M6812B_OR   (1<<3)
#define M6812B_NF   (1<<2)
#define M6812B_FE   (1<<1)
#define M6812B_PF   (1)

/* Registro: SC0SR2   ****************************** */
#define M6812_SC0SR2   (0x00C5)
#define M6812B_SCSWAI   (1<<7)
#define M6812B_MIE   (1<<6)
#define M6812B_MDL1   (1<<5)
#define M6812B_MDL0   (1<<4)
#define M6812B_RAF   (1)

/* Registro: SC0DRH   ****************************** */
#define M6812_SC0DRH   (0x00C6)
#define M6812B_R8   (1<<7)
#define M6812B_T8   (1<<6)

/* Registro: SC0DRL   ****************************** */
#define M6812_SC0DRL   (0x00C7)

/*Los bits de los registros del SC1 son los mismos que los del SC0 */

/* Registro: SC1BDH   ****************************** */
#define M6812_SC1BDH   (0x00C8)

/* Registro: SC1BDL   ****************************** */
#define M6812_SC1BDL   (0x00C9)

/* Registro: SC1CR1   ****************************** */
#define M6812_SC1CR1   (0x00CA)

/* Registro: SC1CR2   ****************************** */
#define M6812_SC1CR2   (0x00CB)

/* Registro: SC1SR1   ****************************** */
#define M6812_SC1SR1   (0x00CC)

/* Registro: SC1SR2   ****************************** */
#define M6812_SC1SR2   (0x00CD)

/* Registro: SC1DRH   ****************************** */
#define M6812_SC1DRH   (0x00CE)

/* Registro: SC1DRL   ****************************** */
#define M6812_SC1DRL   (0x00CF)

/* Registro: SP0CR1   ****************************** */
#define M6812_SP0CR1   (0x00D0)
#define M6812B_SPIE   (1<<7)
#define M6812B_SPE   (1<<6)
#define M6812B_SWOM   (1<<5)
#define M6812B_MSTR   (1<<4)
#define M6812B_CPOL   (1<<3)
#define M6812B_CPHA   (1<<2)
#define M6812B_SSOE   (1<<1)
#define M6812B_LSBF   (1)

/* Registro: SP0CR2   ****************************** */
#define M6812_SP0CR2   (0x00D1)
#define M6812B_SPSWAI   (1<<1)
#define M6812B_SPC0   (1)

/* Registro: SP0BR   ****************************** */
#define M6812_SP0BR   (0x00D2)
#define M6812B_SPR2   (1<<2)
#define M6812B_SPR1   (1<<1)
#define M6812B_SPR0   (1)

/* Registro: SP0SR   ****************************** */
#define M6812_SP0SR   (0x00D3)
#define M6812B_SPIF   (1<<7)
#define M6812B_WCOL   (1<<6)
#define M6812B_MODF   (1<<4)

/* Registro: SP0DR   ****************************** */
#define M6812_SP0DR   (0x00D5)

/* Registro: PORTS   ****************************** */
#define M6812_PORTS   (0x00D6)
#define M6812B_PS7   (1<<7)
#define M6812B_PS6   (1<<6)
#define M6812B_PS5   (1<<5)
#define M6812B_PS4   (1<<4)
#define M6812B_PS3   (1<<3)
#define M6812B_PS2   (1<<2)
#define M6812B_PS1   (1<<1)
#define M6812B_PS0   (1)

/* Registro: DDRS   ****************************** */
#define M6812_DDRS   (0x00D7)
#define M6812B_DDS7   (1<<7)
#define M6812B_DDS6   (1<<6)
#define M6812B_DDS5   (1<<5)
#define M6812B_DDS4   (1<<4)
#define M6812B_DDS3   (1<<3)
#define M6812B_DDS2   (1<<2)
#define M6812B_DDS1   (1<<1)
#define M6812B_DDS0   (1)

/* Registro: PURDS   ****************************** */
#define M6812_PURDS   (0x00D9)
#define M6812B_RDPS2   (1<<6)
#define M6812B_RDPS1   (1<<5)
#define M6812B_RDPS0   (1<<4)
#define M6812B_PUPS2   (1<<2)
#define M6812B_PUPS1   (1<<1)
#define M6812B_PUPS0   (1)

/* Registro: EEDIVH   ****************************** */
#define M6812_EEDIVH   (0x00EE)
#define M6812B_EEDIV9   (1<<1)
#define M6812B_EEDIV8   (1)

/* Registro: EEDIVL   ****************************** */
#define M6812_EEDIVL   (0x00EF)
#define M6812B_EEDIV7   (1<<7)
#define M6812B_EEDIV6   (1<<6)
#define M6812B_EEDIV5   (1<<5)
#define M6812B_EEDIV4   (1<<4)
#define M6812B_EEDIV3   (1<<3)
#define M6812B_EEDIV2   (1<<2)
#define M6812B_EEDIV1   (1<<1)
#define M6812B_EEDIV0   (1)

/* Registro: EEMCR   ****************************** */
#define M6812_EEMCR   (0x00F0)
#define M6812B_NOBDML   (1<<7)
#define M6812B_NOSHB   (1<<6)
#define M6812B_FPOPEN   (1<<4)
#define M6812B_EESWAI   (1<<2)
#define M6812B_PROTLCK   (1<<1)
#define M6812B_DMY   (1)

/* Registro: EEPROT   ****************************** */
#define M6812_EEPROT   (0x00F1)
#define M6812B_SHPROT   (1<<7)
#define M6812B_BPROT4   (1<<4)
#define M6812B_BPROT3   (1<<3)
#define M6812B_BPROT2   (1<<2)
#define M6812B_BPROT1   (1<<1)
#define M6812B_BPROT0   (1)

/* Registro: EEPROG   ****************************** */
#define M6812_EEPROG   (0x00F3)
#define M6812B_BULKP   (1<<7)
/*;;; Es el mismo que en el PLL:  AUTO */
#define M6812B_BYTE   (1<<4)
#define M6812B_ROW   (1<<3)
#define M6812B_ERASE   (1<<2)
#define M6812B_EELAT   (1<<1)
#define M6812B_EEPGM   (1)

/* Registro: FEE32LCK   ****************************** */
#define M6812_FEE32LCK   (0x00F4)
#define M6812B_FEE32LOCK   (1)

/* Registro: FEE32MCR   ****************************** */
#define M6812_FEE32MCR   (0x00F5)
#define M6812B_BOOTP   (1)

/* Registro: FEE32CTL   ****************************** */
#define M6812_FEE32CTL   (0x00F7)
#define M6812B_FEESWAI   (1<<4)
#define M6812B_HVEN   (1<<3)
#define M6812B_ERAS   (1<<1)
#define M6812B_PGM   (1)

/* Registro: FEE28LCK   ****************************** */
#define M6812_FEE28LCK   (0x00F8)
#define M6812B_FEE28LOCK   (1)

/* Registro: FEE28MCR   ****************************** */
#define M6812_FEE28MCR   (0x00F9)
/*;;; ya está en el 32  BOOTP*/

/* Registro: FEE28CTL   ****************************** */
#define M6812_FEE28CTL   (0x00FB)
/*                 ;;Los mismos bits que en 32*/

/*;;; Registros de subsistema CAN */
/* Registro: CMCR0   ****************************** */
#define M6812_CMCR0   (0x0100)
#define M6812B_CSWAI   (1<<5)
#define M6812B_SYNCH    (1<<4)
#define M6812B_TLNKEN    (1<<3)
#define M6812B_SLPAK    (1<<2)
#define M6812B_SLPRQ    (1<<1)
#define M6812B_SFTRES   (1)

/* Registro: CMCR1   ****************************** */
#define M6812_CMCR1   (0x0101)
#define M6812B_LOOPB    (1<<2)
#define M6812B_WUPM    (1<<1)
#define M6812B_CLKSRC    (1)

/* Registro: CBTR0   ****************************** */
#define M6812_CBTR0   (0x0102)
#define M6812B_SJW1    (1<<7)
#define M6812B_SJW0    (1<<6)
#define M6812B_BRP5    (1<<5)
#define M6812B_BRP4    (1<<4)
#define M6812B_BRP3    (1<<3)
#define M6812B_BRP2    (1<<2)
#define M6812B_BRP1    (1<<1)
#define M6812B_BRP0    (1)


/* Registro: CBTR1   ****************************** */
#define M6812_CBTR1   (0x0103)
#define M6812B_SAMP    (1<<7)
#define M6812B_TSEG22    (1<<6)
#define M6812B_TSEG21    (1<<5)
#define M6812B_TSEG20    (1<<4)
#define M6812B_TSEG13    (1<<3)
#define M6812B_TSEG12    (1<<2)
#define M6812B_TSEG11    (1<<1)
#define M6812B_TSEG10    (1)

/* Registro: CRFLG   ****************************** */
#define M6812_CRFLG   (0x0104)
#define M6812B_WUPIF    (1<<7)
#define M6812B_RWRNIF    (1<<6)
#define M6812B_TWRNIF    (1<<5)
#define M6812B_RERRIF    (1<<4)
#define M6812B_TERRIF    (1<<3)
#define M6812B_BOFFIF    (1<<2)
#define M6812B_OVRIF    (1<<1)
#define M6812B_RXF    (1)

/* Registro: CRIER   ****************************** */
#define M6812_CRIER   (0x0105)
#define M6812B_WUPIE    (1<<7)
#define M6812B_RWRNIE    (1<<6)
#define M6812B_TWRNIE    (1<<5)
#define M6812B_RERRIE    (1<<4)
#define M6812B_TERRIE    (1<<3)
#define M6812B_BOFFIE    (1<<2)
#define M6812B_OVRIE    (1<<2)
#define M6812B_RXFIE    (1)

/* Registro: CTFLG   ****************************** */
#define M6812_CTFLG   (0x0106)
#define M6812B_ABTAK2    (1<<6)
#define M6812B_ABTAK1    (1<<5)
#define M6812B_ABTAK0    (1<<4)
#define M6812B_TXE2    (1<<2)
#define M6812B_TXE1    (1<<1)
#define M6812B_TXE0    (1)

/* Registro: CTCR   ****************************** */
#define M6812_CTCR   (0x0107)
#define M6812B_ABTRQ2    (1<<6)
#define M6812B_ABTRQ1    (1<<5)
#define M6812B_ABTRQ0    (1<<4)
#define M6812B_TXEIE2    (1<<2)
#define M6812B_TXEIE1    (1<<1)
#define M6812B_TXEIE0    (1)

/* Registro: CIDAC   ****************************** */
#define M6812_CIDAC   (0x0108)
#define M6812B_IDAM1    (1<<5)
#define M6812B_IDAM0    (1<<4)
#define M6812B_IDHIT2    (1<<2)
#define M6812B_IDHIT1    (1<<1)
#define M6812B_IDHIT0    (1)

/* Registro: CRXERR   ****************************** */
#define M6812_CRXERR   (0x010E)
#define M6812B_RXERR7    (1<<7)
#define M6812B_RXERR6    (1<<6)
#define M6812B_RXERR5    (1<<5)
#define M6812B_RXERR4    (1<<4)
#define M6812B_RXERR3    (1<<3)
#define M6812B_RXERR2    (1<<2)
#define M6812B_RXERR1    (1<<1)
#define M6812B_RXERR0    (1)

/* Registro: CTXERR   ****************************** */
#define M6812_CTXERR   (0x010F)
#define M6812B_TXERR7    (1<<7)
#define M6812B_TXERR6    (1<<6)
#define M6812B_TXERR5    (1<<5)
#define M6812B_TXERR4    (1<<4)
#define M6812B_TXERR3    (1<<3)
#define M6812B_TXERR2    (1<<2)
#define M6812B_TXERR1    (1<<1)
#define M6812B_TXERR0    (1)

/* Registro: CIDAR0   ****************************** */
#define M6812_CIDAR0   (0x0110)
#define M6812B_AC7    (1<<7)
#define M6812B_AC6    (1<<6)
#define M6812B_AC5    (1<<5)
#define M6812B_AC4    (1<<4)
#define M6812B_AC3    (1<<3)
#define M6812B_AC2    (1<<2)
#define M6812B_AC1    (1<<2)
#define M6812B_AC0    (1)

/* Registro: CIDAR1   ****************************** */
#define M6812_CIDAR1   (0x0111)

/* Registro: CIDAR2   ****************************** */
#define M6812_CIDAR2   (0x0112)

/* Registro: CIDAR3   ****************************** */
#define M6812_CIDAR3   (0x0113)

/* Registro: CIDMR0   ****************************** */
#define M6812_CIDMR0   (0x0114)
#define M6812B_AM7    (1<<7)
#define M6812B_AM6    (1<<6)
#define M6812B_AM5    (1<<5)
#define M6812B_AM4    (1<<4)
#define M6812B_AM3    (1<<3)
#define M6812B_AM2    (1<<2)
#define M6812B_AM1    (1<<1)
#define M6812B_AM0    (1)

/* Registro: CIDMR1   ****************************** */
#define M6812_CIDMR1   (0x0115)

/* Registro: CIDMR2   ****************************** */
#define M6812_CIDMR2   (0x0116)

/* Registro: CIDMR3   ****************************** */
#define M6812_CIDMR3   (0x0117)

/* Registro: CIDAR4   ****************************** */
#define M6812_CIDAR4   (0x0118)

/* Registro: CIDAR5   ****************************** */
#define M6812_CIDAR5   (0x0119)

/* Registro: CIDAR6   ****************************** */
#define M6812_CIDAR6   (0x011A)

/* Registro: CIDAR7   ****************************** */
#define M6812_CIDAR7   (0x011B)

/* Registro: CIDMR4   ****************************** */
#define M6812_CIDMR4   (0x011C)

/* Registro: CIDMR5   ****************************** */
#define M6812_CIDMR5   (0x011D)

/* Registro: CIDMR6   ****************************** */
#define M6812_CIDMR6   (0x011E)

/* Registro: CIDMR7   ****************************** */
#define M6812_CIDMR7   (0x011F)


/* Registro: PCTLCAN   ****************************** */
#define M6812_PCTLCAN   (0x013D)
#define M6812B_PUPCAN    (1<<1)
#define M6812B_RDPCAN    (1)

/* Registro: PORTCAN   ****************************** */
#define M6812_PORTCAN   (0x013E)
#define M6812B_PCAN7    (1<<7)
#define M6812B_PCAN6    (1<<6)
#define M6812B_PCAN5    (1<<5)
#define M6812B_PCAN4    (1<<4)
#define M6812B_PCAN3    (1<<3)
#define M6812B_PCAN2    (1<<2)
#define M6812B_PCAN1    (1<<1)
#define M6812B_PCAN0    (1)

/* Registro: DDRCAN   ****************************** */
#define M6812_DDRCAN   (0x013F)
#define M6812B_DDCAN7    (1<<7)
#define M6812B_DDCAN6    (1<<6)
#define M6812B_DDCAN5    (1<<5)
#define M6812B_DDCAN4    (1<<4)
#define M6812B_DDCAN3    (1<<3)
#define M6812B_DDCAN2    (1<<2)
#define M6812B_DDCAN1    (1<<1)
#define M6812B_DDCAN0    (1)

/* Registro: RxFG   ****************************** */
#define M6812_RxFG   (0x0140)

/* Registro: Tx0   ****************************** */
#define M6812_Tx0   (0x0150)

/* Registro: Tx1   ****************************** */
#define M6812_Tx1   (0x0160)

/* Registro: Tx2   ****************************** */
#define M6812_Tx2   (0x0170)

      /*;;; Fin de registros del sistema CAN */




/* Registro: ATD1CTL0   ****************************** */
#define M6812_ATD1CTL0   (0x01E0)

/* Registro: ATD1CTL1   ****************************** */
#define M6812_ATD1CTL1   (0x01E1)

/* Registro: ATD1CTL2   ****************************** */
#define M6812_ATD1CTL2   (0x01E2)
      /*        ;; los mismos bites que el 0*/

/* Registro: ATD1CTL3   ****************************** */
#define M6812_ATD1CTL3   (0x01E3)

/* Registro: ATD1CTL4   ****************************** */
#define M6812_ATD1CTL4   (0x01E4)

/* Registro: ATD1CTL5   ****************************** */
#define M6812_ATD1CTL5   (0x01E5)

/* Registro: ATD1STAT0   ****************************** */
#define M6812_ATD1STAT0   (0x01E6)

/* Registro: ATD1STAT1   ****************************** */
#define M6812_ATD1STAT1   (0x01E7)

/* Registro: ATD1TESTH   ****************************** */
#define M6812_ATD1TESTH   (0x01E8)

/* Registro: ATD1TESTL   ****************************** */
#define M6812_ATD1TESTL   (0x01E9)

/* Registro: PORTAD1   ****************************** */
#define M6812_PORTAD1   (0x01EF)
#define M6812B_PAD17   (1<<7)
#define M6812B_PAD16   (1<<6)
#define M6812B_PAD15   (1<<5)
#define M6812B_PAD14   (1<<4)
#define M6812B_PAD13   (1<<3)
#define M6812B_PAD12   (1<<2)
#define M6812B_PAD11   (1<<1)
#define M6812B_PAD10   (1)

/* Registro: ADR10H   ****************************** */
#define M6812_ADR10H   (0x01F0)

/* Registro: ADR10L   ****************************** */
#define M6812_ADR10L   (0x01F1)

/* Registro: ADR11H   ****************************** */
#define M6812_ADR11H   (0x01F2)

/* Registro: ADR11L   ****************************** */
#define M6812_ADR11L   (0x01F3)

/* Registro: ADR12H   ****************************** */
#define M6812_ADR12H   (0x01F4)

/* Registro: ADR12L   ****************************** */
#define M6812_ADR12L   (0x01F5)

/* Registro: ADR13H   ****************************** */
#define M6812_ADR13H   (0x01F6)

/* Registro: ADR13L   ****************************** */
#define M6812_ADR13L   (0x01F7)

/* Registro: ADR14H   ****************************** */
#define M6812_ADR14H   (0x01F8)

/* Registro: ADR14L   ****************************** */
#define M6812_ADR14L   (0x01F9)

/* Registro: ADR15H   ****************************** */
#define M6812_ADR15H   (0x01FA)

/* Registro: ADR15L   ****************************** */
#define M6812_ADR15L   (0x01FB)

/* Registro: ADR16H   ****************************** */
#define M6812_ADR16H   (0x01FC)

/* Registro: ADR16L   ****************************** */
#define M6812_ADR16L   (0x01FD)

/* Registro: ADR17H   ****************************** */
#define M6812_ADR17H   (0x01FE)

/* Registro: ADR17L   ****************************** */
#define M6812_ADR17L   (0x01FF)



#define M6812_IO_SIZE   (0x3ff)

/* The I/O registers are represented by a volatile array.
   Address if fixed at link time.  */
extern volatile unsigned char _io_ports[];

#endif /* _SYS_PORTS_DEF_H */
