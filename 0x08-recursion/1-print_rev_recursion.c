#include "main.h"

/**
 * getEnd - gets the end of a string
 * _print_rev_recursion - prints a string in reverse using recursion
 * @s: string to be reversed
 */

char getEnd(char *s)
{
	while (*s != '\0)
	{
		s++;
	}
	return (*s);
}

void _print_rev_recursion(char *s)
{
	char *res;
	char **tmp;
	
	tmp = &s;

	getEnd(s);

	if (*s == '\0')
	{
		res = s--;
		_putchar(*s);
		_print_rev_recursion(res);
	}
	if (*s == **tmp)
		_putchar(*s);
}
