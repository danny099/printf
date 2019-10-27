#include "holberton.h"

/**
 * comentarios que llenara dannysito
 */

void print_c(va_list letter)
{
	char ch = va_arg(letter, int);
	write(1, &ch, 1);
}
