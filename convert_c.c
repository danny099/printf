#include "holberton.h"

/**
 * convert_c - function
 *
 *@symbol: is a pointer
 *@list: is a va_list
 * Return: On succes .
 * On error.
 */
void (*convert_c(const char *symbol))(va_list list)
{
	int i;

	op_t ops[] = {
		{"c", print_c},
		{"d", print_d},
		{"s", print_s},
		{"i", print_i},
		{NULL, NULL}
	};

	for (i = 0; (ops[i].op) != NULL; i++)
	{
		if (*symbol == *(ops[i].op))
			return ops[i].f;
	}
	write(2, "Not found", 9);
	exit(1);
}
