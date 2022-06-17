#include "main.h"

/**
 * leet - creates code 1337
 * @c: points to string
 * Return: @c
 */

char *leet(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		if (c[i] == 'a' || c[i] == 'A')
		{
			c[i] = '4';
		}
		else if (c[i] == 'e' || c[i] == 'E')
		{
			c[i] = '3';
		}
		else if (c[i] == 'o' || c[i] == 'O')
		{
			c[i] = '0';
		}
		else if (c[i] == 't' || c[i] == 'T')
		{
			c[i] = '7';
		}
		else if (c[i] == 'l' || c[i] == 'L')
		{
			c[i] = '1';
		}
		else
		{
			c[i] = c[i];
		}
		i++;
	}
	return (c);
}
