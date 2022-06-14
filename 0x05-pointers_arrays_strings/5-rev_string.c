#include "main.h"

/**
 * rev_string - reverses a string
 * @s: points to string to be reversed
 * Return: 0
 */

void rev_string(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	while (len >= 0)
	{
		if (s[len] == '\0')
		{
		}
		else
		{
			_putchar(s[len]);
		}
		len--;
	}

}
