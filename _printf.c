#include "main.h"
/**
 * _printf - function to print to stdout
 * @format: format of arguments passed
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	char *str;
	int len_format = 0;
	va_list listname;

	va_start(listname, format);

	for (; format[len_format] != '\0'; len_format++)
	{
		if (format[len_format] == '%')/*format spec*/
		{
			len_format++;
			switch (format[len_format])
			{
				case 'c': /* character */
					_putchar(va_arg(listname, int));
					break;
				case 's': /*string */
					str = va_arg(listname, char *);
					print_strings(str);
				break;
				default: /*Unknown specifier*/
				_putchar(format[len_format]);
				len_format++;
				continue;
			}
		}
		else
		_putchar(format[len_format]);
	}
	va_end(listname);
	return (len_format);
}
/**
 * print_strings - function prints string
 * @str: string to be printed
 * Return: void
 */
void print_strings(char *str)
{
int j;

j = 0;
	while (str[j])
	{
		_putchar(str[j]);
		j++;
	}
}

/**
 *_putchar - prints a character to the standard output
 *@c: character c to be printed
 *
 *Return: return 'c'
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
