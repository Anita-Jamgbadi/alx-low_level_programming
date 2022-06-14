#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: points to sting in question
 * Return: nothing
 */

void puts_half(char *str)
{
	int len, halfLen, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	halfLen = len / 2;

	for (i = 0; i <= halfLen; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
