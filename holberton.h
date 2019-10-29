#ifndef PRINTF
#define PRINTF

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(va_list f);
} op_t;

int _printf(const char *format, ...);
int (*convert_c(const char *))(va_list list);

/*  */
int print_number(int n);


/* print_especials  */

int print_c(va_list letter);
int print_d(va_list letter);
int print_s(va_list letter);
int print_i(va_list letter);

#endif
