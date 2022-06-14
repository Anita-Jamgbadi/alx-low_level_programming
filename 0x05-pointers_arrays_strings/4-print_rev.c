#include "main.h"

/**
 * print_rev - print in reverse
 * @s: points to string to be printed
 * Return: 0
 */

void print_rev(char *s)
{
	int len, slen;

	slen, len = 0;
	while(s[len] != '\0')
	{
		slen++;
	}

	for (slen; slen >= 0; slen--)
	{
		_putchar(s[slen]);
	}
	_putchar('\n');
}
