#include "holberton.h"

/**
 *
 */
void (*convert_c(const char *letter))(va_list list)
{
	int i;

	op_t ops[] = {
		{"c", print_c}
	};

	for (i = 0; i < 1; i++)
	{
		if (letter[i] == ops[i].op[0])
			return ops[i].f;
	}
	write(2, "Not found", 9);
	exit(1);
}
