#i#i#include "holberton.h"


/**
 * convert_c - function
 *
 *@symbol: is a pointer
 *@list: is a va_list
 * Return: On succes .
 * On error.
 */
int (*convert(const char *symbol))(va_list list)
{
	int i;

	op_t ops[] = {
		{"c", print_c},
		{"d", print_d},
		{"s", print_s},
		{"i", print_i},
	};

	for (i = 0; i < 4; i++)
	{
		if (*symbol == *(ops[i].op))
			return ops[i].f;
		else
			exit(1);
	}
	write(2, "Not found", 9);
	//exit (1);
}
