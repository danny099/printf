#include "holberton.h"

/**
 * print_number - function that print the int with %d & %i
 * @va: list with the number
 * Return: the allocated in the var
 */
int print_number(va_list va)
{
	unsigned int i, num, index, allocated, negative = 0;
	int intager;
	char *ptr;

	intager = va_arg(va, int);
	num = intager;
	if (intager < 0)
	{
		negative = 1;
		num = num * -1;
	}

	index = 1;
	while (intager / 10 != 0)
	{
		intager = intager / 10;
		index++;
	}
	ptr = malloc((sizeof(char) * index) + negative);
	if (ptr == NULL)
		return (0);
	for (i = 1; i <= index; i++)
	{
		ptr[index - i + negative] = ((num % 10) + 48);
		num = num / 10;
	}
	if (negative == 1)
		ptr[0] = '-';
	allocated = (write(1, ptr, index + negative));
	free(ptr);
	return (allocated);
}
