#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

int _printf(const char *format, ...);

int print_strings(va_list);
int _putchar(va_list);
int print_decimals(va_list);
int print_unsigned(va_list);
int _putchar2(char c);
int (*get_specifier(char c))(va_list);

/**
 * struct format_specifier - struct
 * @cp: character
 * @print_function: function pointer.
 */

typedef struct format_specifier
{
	char cp;
	int (*print_function)(va_list);
} fs_t;

#endif
