#include "holberton.h"
#include <stdio.h>

int _printf(const char *format, ...)
{
	int i;

	va_list args;

	va_start(args, format);

	for (i = 0; *(format + i) != '\0'; i++)
	{
		if (*(format + i) == '%')
			convert_c(format + ++i)(args);
		else
			write(1, (format + i), 1);
	}

	return (0);
}
