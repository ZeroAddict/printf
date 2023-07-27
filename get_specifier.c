#include "main.h"

/**
 * get_specifier - registers the specifiers. calls function
 * @c: specifier char
 * Return: pointer to function
 */

int (*get_specifier(char c))(va_list)
{
	int i;
	fs_t fs[] =  {{'c', _putchar},
		{'s', print_strings},
		{'d', print_decimals},
		{'u', print_unsigned}};

	i = 0;
	while (i < 3)
	{
		if (c == fs[i].sp)
			return (fs[i].print_function);
	}
	return (NULL);
}
