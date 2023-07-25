#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
int print_strings(char *str);
int _putchar(char c);
int (*handleAll(char c))(char*);
typedef struct format_specifier
{
	char cp;
	int (*handleFunction)(char* s);
} cp_t;
#endif
