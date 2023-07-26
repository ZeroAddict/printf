#include <unistd.h>
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
