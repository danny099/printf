#include "holberton.h"

int (*type(const char *simbolo))(va_list va, char *buffersito)
{
	op_t func[] = {
		{"c", print_c}/*,
		{"s", print_s},
		{"d", print_d_i},
		{"i", print_d_i},
		{"%", print_percent}*/
	};
	int i;

	for (i = 0; i < 5; i++)
	{
		if (*simbolo == *(func[i].string))
			return (func[i].f);
	}

	return (NULL);
}
