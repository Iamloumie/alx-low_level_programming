#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <limits.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * struct format - converter for printf
 * @str: type char pointer of the specifier
 * @spec: function for the conversion specifier
 *
 */
typedef struct format
{
	char *str;
	int (*spec)();
} print;

int _putchar(char c);
int spec_37(void);
int bin_spec(va_list args);
int c_spec(va_list args);
int d_spec(va_list args);
int i_spec(va_list args);
int HEX_spec(va_list args);
int hex_spec(va_list args);
int o_spec(va_list args);
int rev_str_spec(va_list args);
int rot13_spec(va_list args);
int _strlen(char *str);
int _strlenc(const char *str);
int str_spec(va_list args);
int u_spec(va_list args);
int ptr_spec(va_list args);
int print_HEX_xtra(unsigned int num);
int excl_str(va_list args);
int print_hex_xtra(unsigned long int num);
int _printf(const char *format, ...);
int flush_buffer(char buffer[], int *buffer_index);
int buffer_char(char c, char buffer[], int *buffer_index);
int lng_HEX(va_list args);
int sht_HEX(va_list args);
int lng_uns(va_list args);
int lng_o(va_list args);
int sht_o(va_list args);
int lng_i(va_list args);
int sht_i(va_list args);

int sht_d(va_list args);
int lng_d(va_list args);


#endif
