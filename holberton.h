#ifndef PRINTF
#define PRINTF

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct formatter
{
	char *string;
	int (*f)(va_list va, char *buffersito);
} op_t;

int _printf(const char *format, ...);
int (*type(const char *symbol))(va_list va, char *buffersito);
void returnNumber(int n, char *buffersito);
int print_c(va_list va, char *buffersito);
int print_s(va_list va, char *buffersito);
int print_d_i(va_list va, char *buffersito);
int print_por(va_list va, char *buffersito);

#endif
