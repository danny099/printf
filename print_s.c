#include "holberton.h"

/**
 * comentarios que llenara dannysito
 */

int print_s(va_list letter)
{
	int count = 0,i;
	char *str = va_arg(letter, char*);
	if (!str)
		return (-1);

	for (i = 0; *(str + i); i++)
	{
		write(1, (str + i), 1);
	}
	return (i);
}
