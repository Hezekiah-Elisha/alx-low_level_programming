#include "function_pointers.h"
/**
 * print_name -  a func
 * @name: first parameter
 * @f: second parameter
 * Return: none
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		f(name);
	}
}
