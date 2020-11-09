/*
 * sys_uartmgr_port.hpp
 *
 *  Created on: 2019年12月5日
 *      Author: CkovMk
 */

#ifndef D_MK66F18_SYS_UARTMGR_PORT_HPP_
#define D_MK66F18_SYS_UARTMGR_PORT_HPP_

#include "hitsic_common.h"

#if defined(HITSIC_USE_UARTMGR) && (HITSIC_USE_UARTMGR > 0)

/* RT1052
#define	UART_Type 						UART_Type
#define uart_handle_t 					lpuart_handle_t
#define	uart_transfer_callback_t 		lpuart_transfer_callback_t
#define UART_WriteBlocking 				LPUART_WriteBlocking
#define UART_ReadBlocking 				LPUART_ReadBlocking
#define UART_TransferCreateHandle 		LPUART_TransferCreateHandle
#define uart_transfer_t 				lpuart_transfer_t
#define UART_TransferSendNonBlocking 	LPUART_TransferSendNonBlocking
#define UART_TransferReceiveNonBlocking LPUART_TransferReceiveNonBlocking
#define kStatus_UART_TxIdle 			kStatus_LPUART_TxIdle
#define kStatus_UART_RxIdle 			kStatus_LPUART_RxIdle
#define UART_TransferAbortSend 			LPUART_TransferAbortSend
#define UART_TransferAbortReceive 		LPUART_TransferAbortReceive
*/


#define UART_TPCTRL_HEADER 0xae


#define UARTMGR_INST_DEFINITION	\
	static uartMgr_t uart0(UART0);
	//static uartMgr_t uart1(UART1);

#define UARTMGR_INST_SWITCHCASE \
	case UART0_BASE: return uart0; break;
	//case UART1_BASE: return uart1; break;

#endif // ! HITSIC_USE_UARTMGR

#endif // ! D_MK66F18_SYS_UARTMGR_PORT_HPP_
