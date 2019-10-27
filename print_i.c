#include "holberton.h"

/**
 * comentarios que llenara dannysito
 */

void print_i(va_list letter)
{

	int i = va_arg(letter, int);
	print_number(i);
}
