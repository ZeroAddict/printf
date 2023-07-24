#include "main.h"
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

	if (!format)
		return (-1);
	if (!format[0])
		return (0);
	{
		va_start(listname, format);
		for (; format[len_format] != '\0'; len_format++)
		{
			if (format[len_format] == '%')
			{ /*format spec*/ len_format++;
				if (format[len_format] == '%')
					_putchar('%');
				else
				{
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
			}
			else
				_putchar(format[len_format]);
			count++;
		}
	}
	va_end(listname); /*printf("%d\n", count);*/
	return (count);
}
/**
 * print_strings - function prints string
 * @str: string to be printed
 * Return: prints string and character count
 */
int print_strings(char *str)
{
	int j;
	int c;

	j = 0;
	if (str == NULL)
	{
		str = "(null)";
	}
	c = 0;

	while (str[j])
	{
		_putchar(str[j]);
		j++;
		c++;
	}
	return (c);
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
