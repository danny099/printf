#include "holberton.h"

/**
  * comentarios de dannysito
  */
int _printf(const char *format, ...)
{

	va_list va;
	int i = 0, count = 0;

	va_start(va, format);
	if (format == NULL)
		return (-1);
	while (*(format + i))
	{
		if (*(format + i) == '%')
		{
			if (*(format + i + 1) == '\0')
				return (-1);
			else if (*(format + i + 1) == '%')
			{
				count++;
				write(1, (format + i), 1);
				i++;
			}
			else if (*(format + i + 1) != 'c' && *(format + i + 1) != 's')
			{
				count++;
				write(1, (format + i), 1);
			}
			else
			{
				count += type(format + i + 1)(va);
				i++;
			}
		}
		else
		{
			count++;
			write(1, (format + i), 1);
		}
		i++;
	}
	va_end(va);
	return (count);
}
