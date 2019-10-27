#include "holberton.h"

/**
 * comentarios que llenara dannysito
 */

void print_s(va_list letter)
{
	int i;
	char *str = va_arg(letter, char*);

	if (!str)
		exit(1);
	for (i = 0; *(str + i); i++)
		write(1, (str + i), 1);
}
