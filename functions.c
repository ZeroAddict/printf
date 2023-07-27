#include "main.h"
/**
 * print_decimals - prints numbers.
 * @listname: list of arg
 * Return: count.
 */
int print_decimals(va_list listname)
{
	int divisor, digit, count;
	unsigned int m;

	divisor = 1;
	count = 0;

	if (n < 0)
	{
		putchar('-');
		count++;
		m = (unsigned int)(-1 * (n + 1)) + 1;
	}
	n = m;

	if (n == 0)
	{
		putchar('0');
		count++;
	}
	while (n / divisor > 9)
		divisor *= 10;
	while (divisor != 0)
	{
		digit = n / divisor;
		putchar('0' + digit);
		count++;
		n %= divisor;
		divisor /= 10;
	}
	return (count);
}
/**
 * print_unsigned - print unsigned value
 * @listname: lst of args.
 * Return: count
 */

int print_unsigned(va_list listname)
{
	int count = 0;
	int digit, divisor;
	int n = va_arg(listname, signed int);

	divisor = 1;
	while (n / divisor > 9)
		divisor *= 10;
	while (divisor != 0)
	{
		digit = n / divisor;
		putchar('0' + digit);
		count++;
		n %= divisor;
		divisor /= 10;
	}
	return (count);
}
/**
 * print_strings - function prints string
 * @listname: list of args
 * Return: prints string and character count
 */
int print_strings(va_list listname)
{
	int j;
	int c;
	char *str;

	str = va_arg(listname, char *)
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
 *@listname: list of args
 *Return: return 'c'
 */

int _putchar(va_list listname)
{
	char c;

	c = va_arg(listname, int);
	return (write(1, &c, 1));
}
/**
 * _putchar2 - prints a character to the standard output
 * @c: character c to be printed
 *
 * Return: return 'c'.
 */

int _putchar2(char c)
{
	return (write(1, &c, 1));
}
