#include "holberton.h"

int (*type(const char *simbolo))(va_list va, char *buffer)
{
	op_t func[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_percent}
	};
	int i;

	for (i = 0; i < 3; i++)
	{
		if (*simbolo == *(func[i].string))
			return (func[i].f);
	}

	return (NULL);
}
