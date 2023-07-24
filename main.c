#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char c = 'u';
	int len2;

	len2 = _printf("Let's try to printf a simple sentence.\n");
	printf("Length:[%d, %i]\n", len2, len2);
	/*len2 = printf("Let's try to printf a simple sentence.\n");*/
	_printf("Character:[%c]\n", 'H');
	/*printf("Character:[%c]\n",'H');*/
	_printf("String:[%s]\n", "I am a string !");
	/*printf("String:[%s]\n", "I am a string !");*/
	len2 = _printf("Percent:[%%]\n");
	/*len = printf("Percent:[%%]\n");*/
	/*_printf("Len:[%d]\n", len);*/
	printf("Len:[%d]\n", len2);
	_printf("%c %d \n", 'n', 10);
	_printf("%c %c \n", 'u', 't');
	_printf("%c\n", 7);
	_printf("%c\n", 'j');
	_printf("%c\n", 's');
	_printf("%c %d\n", 'w');
	_printf("%c %c\n", 'c', '5');
	_printf("%c %c\n", 'c', 'c');
	_printf("%c %c\n", c, 'w');
	return (0);
}
