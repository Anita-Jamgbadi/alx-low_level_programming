#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: points to sting in question
 * Return: nothing
 */

void puts_half(char *str)
{
	int len, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}


	for (i = 0; i <= len; i++)
	{
		if (i >= len / 2)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
