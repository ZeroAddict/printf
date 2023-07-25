#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
int print_strings(char *str);
int _putchar(char c);
int (*handleAll(char c))(char *);
/**
 * struct format_specifier - struct
 * @cp: character
 * @handleFunction: function pointer.
 */

typedef struct format_specifier
{
	char cp;
	int (*handleFunction)(char *s);
} cp_t;
#endif
