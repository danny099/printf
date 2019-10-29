#include "holberton.h"

/**
 * comentarios que llenara dannysito
 */

int print_i(va_list letter)
{

	int i = va_arg(letter, int);
	return print_number(i);
}
