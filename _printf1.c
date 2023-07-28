#include "main.h"

/**
 * _printf - function to print to stdout
 * @format: format of arguments passed
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	va_list listname;

	if (!format)
		return (-1);
	if (!format[0])
		return (0);
	va_start(listname, format);
	for (; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i = i + 1;
			if (format[i] == '%')
			{
				_putchar2('%');
			}
			else if (format[i] == '\0' || format[i] == ' ')
			{
				return (-1);
			}
			else
			{
				int (*specifier_function)(va_list) = get_specifier(format[i]);

				if (specifier_function)
					count += specifier_function(listname);
			}
		}
		else
			_putchar2(format[i]);
		count++;
	}
	va_end(listname); /*printf("%d\n", count);*/

	return (count);
}
