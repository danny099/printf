#include "holberton.h"

int _printf(const char *format, ...)
{
	va_list args;
	char *buffersito, *buffer_max;
	int i, counter, lenght = 0, size = 0;

	buffersito = malloc(sizeof(char) * 1024);
	if (buffersito == NULL || format == NULL)
		return (-1);
	buffer_max = buffersito;

	va_start(args, format);
	for (i = 0; *(format + i); i++)
	{
		if (*(format + i) == '%')
		{
			if (*(format + i + 1) == '\0')
			{
				counter = -1;
				break;
			}
			if (type(format + i + 1))
			{
				i++;
				size = type(format + i)(args, buffersito);
				buffersito += size;
				lenght += size;
				counter = lenght;
				continue;
			}
		}
		*buffersito = *(format + i);
		lenght++;
		buffersito++;
		counter = lenght;
	}

	write(1, buffer_max, lenght);
	va_end(args);
	free(buffer_max);

	return (counter);
}
