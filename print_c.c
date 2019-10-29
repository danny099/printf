#include "holberton.h"

/**
 * comentarios que llenara dannysito
 */

int print_c(va_list letter)
{
	char ch = va_arg(letter, int);

	if (!ch)
		return (-1);

	return write(1, &ch, 1);
}
