#include "holberton.h"

/**
 * print_s - save in buffer the characters
 *
 *@va: is a list that contains a chars
 *@buffersito: is a space of memory where are allocate the chars
 * Return: On succes the number of caracthers.
 * On error 6.
 */

int print_s(va_list va)
{
	int i = 0;

	char *str = (va_arg(va, char*));

	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (*(str + i))
	{
		write(1, (str + i), 1);
		i++;
	}
	return (i);
}
