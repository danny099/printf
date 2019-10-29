#include "holberton.h"

/**
 * print_s - save in buffer the characters
 *
 *@va: is a list that contains a chars
 *@buffersito: is a space of memory where are allocate the chars
 * Return: On succes the number of caracthers.
 * On error 6.
 */

int print_s(va_list va, char *buffersito)
{
	char *str;
	char *null = "(null)";
	int i;

	str = va_arg(va, char *);
	if (str == NULL) /* Si es nulo */
	{
		for (i = 0; *(null + i); i++)
		{
			*buffersito = *(null + i);
			buffersito++;
		}

		return (6);
	}

	for (i = 0; *(str + i); i++)
	{
		*buffersito = *(str + i);
		buffersito++;
	}

	return (i);
}
