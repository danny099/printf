#include "holberton.h"

/**
 * print_c - save in buffer the character
 *
 *@va: is a list that contains a char
 *@buffer: is a space of memory where are allocate the char
 * Return: On succes 1.
 * On error 1.
 */

int print_c(va_list va)
{
	unsigned char ch = va_arg(va, int);

	write(1, &ch, 1);
	return (1);
}
