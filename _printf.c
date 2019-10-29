#include "holberton.h"

int _printf(const char *format, ...)
{
	va_list args;
	char *buffersito, *buffer_extra;
	int i, count = 0;
	int add = 0;
	buffersito = malloc(sizeof(char) * 1024);
	if (buffersito == NULL || format == NULL)
		return (-1);
	buffer_extra = buffersito;

	va_start(args, format);
	for (i = 0; *(format + i); i++)
	{
		if (*(format + i) == '%')
		{
			if (*(format + i) == '\0')
			{
				count = -1;
				break;
			}
			if (type(format + i + 1))
			{
				i++;
				add = type(format + i)(args, buffersito);
				count += add;
				buffersito += add;
				continue;
			}
		}
		*buffersito = *(format + i);
		count++;
		buffersito++;
	}
	write(1, buffer_extra, count);
	va_end(args);
	free(buffer_extra);

	return (count);
}
