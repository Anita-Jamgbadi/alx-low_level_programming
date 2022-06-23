#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse using recursion;
 * getEnd - gets the end of a string;
 * @s: string to be reversed
 * Return: getEnd returns the end of the string
 */

char getEnd(char *s)
{
	if (*s != '\0')
	{
		s++;
		getEnd(s);
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
