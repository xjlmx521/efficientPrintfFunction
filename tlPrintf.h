/*****************************************************************************************************
 * @brief	Header file, extend printf interface which called by external usage
 *
 * @author	junjun.xu@telink-semi.com (All the resource owned by Telink Semiconductor)
 *
 */
#pragma once

void my_array_printf(char*data, int len);
int Tl_printf(const char *format, ...);
#if (UART_PRINTF_MODE)

#define printf	Tl_printf
#else
#define printf
#endif

#if (FLASH_PRINTF_MODE)

#define quick_printf ftl_write
#else
#define quick_printf
#endif
