#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints all given numbers on the screen
 * @separator: separator for the numbers e.g (,)
 * @n: number of args
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));

		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(ap);
	printf("\n");
}
