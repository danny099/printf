#ifndef PRINTF
#define PRINTF
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * struct formatter - receives a format an redirects whit a pointer to function
 * @string: the format
 * @f: is a pointer to function
 *
 * Description: receives a format an redirects whit a pointer to function
 */
typedef struct formatter
{
	char *string;
	int (*f)(va_list va);
} op_t;

int _printf(const char *format, ...);
int (*type(const char *symbol))(va_list va);
int print_c(va_list va);
int print_s(va_list va);
#endif
