#include "holberton.h"

/**
 * print_c - save in buffer the character
 *
 *@va: is a list that contains a char
 *@buffer: is a space of memory where are allocate the char
 * Return: On succes 1.
 * On error 1.
 */

int print_c(va_list va, char *buffer)
{
	unsigned char ch;

	ch = va_arg(va, int);
	if (ch == '\0')
		return (1);

	*buffer = ch;
	return (1);
}
