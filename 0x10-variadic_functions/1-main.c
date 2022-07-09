#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - invoker
 * Return: 0
 */

int main(void)
{
	print_numbers("; ", 5, 30, 938, -123024, 43402, 0);
	print_numbers("; ", 1, 30);
	print_numbers("", 4, 304, 76, 87236, 28376);
	print_numbers(NULL, 4, 304, 76, 87236, 28376);
	print_numbers("; ", 0);
	return (0);
}
