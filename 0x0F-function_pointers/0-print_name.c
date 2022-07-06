#include "function_pointers.h"

/**
 * print_name - Accepts a pointer to a function and prints a name
 * @name: name to be printed
 * @f: function that prints name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
