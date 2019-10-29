#include "holberton.h"

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
