#include "holberton.h"

void print_number(int n)
{
	unsigned int num = n;
	char negative = '-';
	char digit;

	if (n < 0)
	{
		write(1, &negative, 1);
		num = -num;
	}

	if((num / 10) > 0)
		print_number(num/10);

	digit = (num % 10) + '0';

	write(1, &digit, 1);
}
