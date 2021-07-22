#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct Ftype - Struct op
 *
 * @c: Parameter char
 * @f: The function associated
 */
typedef struct Ftype
{
	char *c;
	void (*f)(va_list);
} ftype;

#endif
