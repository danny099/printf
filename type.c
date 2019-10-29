#include "holberton.h"
/**
*type-this function redirects to other functions depends the format of receives
 *
 *@simbolo: is a pointer receives a chr
 * Return: On succes the function selected.
 * On error NULL.
 */

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
