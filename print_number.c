#include "holberton.h"

void print_number(int n)
{
	int num = n;
	char digit;

	if((num / 10) > 0)
		print_number(num/10);

	digit = (num % 10) + '0';
	write(1, &digit, 1);
}
