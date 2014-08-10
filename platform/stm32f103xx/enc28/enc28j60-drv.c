/*-----------------------------------------------------------------------------------*/
/*
 * Copyright (c) 2001-2004, Adam Dunkels.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. The name of the author may not be used to endorse or promote
 *    products derived from this software without specific prior
 *    written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS
 * OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
 * GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * This file is part of the uIP TCP/IP stack.
 *
 * This is a modified contiki driver example.
 * Author: Maciej Wasilak (wasilak@gmail.com)
 *
 * $Id: enc28j60-drv.c,v 1.2 2007/05/26 23:05:36 oliverschmidt Exp $
 *
 */
#include "contiki.h"

//#include "stm32f10x.h"
//#include "enc28/enc28j60.h"
//#include "enc28/enc28j60-drv.h"
//#include "contiki-net.h"
//#include "net/uip-neighbor.h"
//#include "net/uip-ds6.h"
//#include <string.h>
//#define DEBUG 0
//#include "net/uip-debug.h"
//
//#define BUF ((struct uip_eth_hdr *)&ll_header[0])
//#define IPBUF ((struct uip_tcpip_hdr *)&uip_buf[UIP_LLH_LEN])
//
PROCESS(enc28j60_process, "ENC28J60 driver");

//static uint8_t eth_mac_addr[6] = { 0x02, 0xaa, 0xbb, 0xcc, 0xdd, 0xee };
//
//static void (*input_callback)(void) = NULL;
//
//uip_ds6_netif_t uip_ds6_if;
//
///*---------------------------------------------------------------------------*/
//void enc28j60_set_input_callback(void (*c)(void)) {
//	printf("enc28j60_set_input_callback function");
//
//	input_callback = c;
//}
//
///*---------------------------------------------------------------------------*/
//u8_t enc28j60_output(uip_lladdr_t *lladdr) {
//	printf("enc28j60_output function");
//	return 0;
//}
//
///*
// * Placeholder - switching off enc28 chip wasn't yet considered
// */
//void enc28j60_exit(void) {
//	printf("enc28j60_exit function");
//
//}
//
///*
// * Wrapper for lowlevel enc28j60 init code
// * in current configuration it reads the Ethernet driver MAC address
// * from EEPROM memory
// */
//void enc28j60_init() {
//	printf("enc28j60_init function");
//
//}
//
///*---------------------------------------------------------------------------*/
//static void pollhandler(void) {
//	printf("pollhandler function");
//
//}

/*---------------------------------------------------------------------------*/
PROCESS_THREAD(enc28j60_process, ev, data) {
	//PROCESS_POLLHANDLER(pollhandler());

		PROCESS_BEGIN();

		printf("eth init\r\n");
//		enc28j60_init();
//
//		tcpip_set_outputfunc( enc28j60_output);
//		// 10 second ARP timer
//		//etimer_set(&timer, 10*CLOCK_SECOND);
//		Delay_Ms(10000);
//		process_poll(&enc28j60_process);
//
//		while(ev != PROCESS_EVENT_EXIT) {
//			PROCESS_WAIT_EVENT();
//
//			if(ev == PROCESS_EVENT_TIMER) {
//				Delay_Ms(10000);
//				uip_arp_timer();
//			}
//		}
//		enc28j60_exit();

		PROCESS_END();

//	PROCESS_BEGIN();
//
//	printf("eth init\n");
//
//	PROCESS_END();
}

/*---------------------------------------------------------------------------*/


