#include "holberton.h"

int _printf(const char *format, ...)
{
	if (!format || (format[0] == '%' && format[1] == '\0'))
		return(-1);

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
	va_end(args);
	return (i);
}
