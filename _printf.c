#include "main.h"
#include <unistd.h>

/**
 * _printf - function to print to stdout
 * @format: format of arguments passed
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	char *str;
	int len_format = 0, count = 0;
	va_list listname;

	if (!format || format[len_format] == '\0' /*|| (format[len_format] == ' ')*/)
		return (-1);
	if (!format[0])
		return (0);
	va_start(listname, format);
	for (; format[len_format] != '\0'; len_format++)
	{
		if (format[len_format] == '%')
		{
			len_format++;
			if (format[len_format] == '%')
			{
				_putchar('%');
				count++;
			}
			else
				switch (format[len_format])
				{
					case 'c': /* character */
						_putchar(va_arg(listname, int));
						count++;
						break;
					case 's': /*string */
						str = va_arg(listname, char *);
						count += print_strings(str);
						break;
				}
		}
		else
			_putchar(format[len_format]);
			count++;
	}
	va_end(listname); /*printf("%d\n", count);*/
	return (count);
}
