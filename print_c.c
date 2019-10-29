#include "holberton.h"
int print_c(va_list va, char *buffer)
{
	unsigned char ch;

	ch = va_arg(va, int);
	if (ch == '\0')
		return (1);

	*buffer = ch;
	return (1);
}
