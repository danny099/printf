#include "holberton.h"

/**
 * comentarios que llenara dannysito
 */

int print_d(va_list letter)
{

	int d = va_arg(letter, int);
	return print_number(d);
}
