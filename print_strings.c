#include "main.h"

/**
 * print_strings - function prints string
 * @str: string to be printed
 * Return: prints string and character count
 */
int print_strings(char *str)
{
	int count = 0;

	if (!str)
		{
			str = "(null)";
		}

	for (; *str != '\0'; str++)
		{
			_putchar(*str);
			count++;
		}
	return (count);
}
