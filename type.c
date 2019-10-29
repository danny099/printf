#include "holberton.h"

int (*type(const char *simbolo))(va_list va)
{
	op_t func[] = {
		{"c", print_c},
		{"s", print_s}
	};
	int i;

	for (i = 0; i < 2; i++)
	{
		if (*simbolo == *(func[i].string))
			return (func[i].f);
	}

	return (NULL);
}
