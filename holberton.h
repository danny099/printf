#ifndef PRINTF
#define PRINTF

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	void (*f)(va_list f);
} op_t;

int _printf(const char *format, ...);
void (*convert_c(const char *))(va_list list);

/* print_especials  */

void print_c(va_list letter);

#endif
