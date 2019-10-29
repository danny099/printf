#include "holberton.h"

/**
 * print_s - print send characthers
 *
 *@va: is a list that contains a chars
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
