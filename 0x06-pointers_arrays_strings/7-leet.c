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
		while (c[i] == 'a' || c[i] == 'A')
		{
			c[i] = '4';
		}
		while (c[i] == 'e' || c[i] == 'E')
		{
			c[i] = '3';
		}
		while (c[i] == 'o' || c[i] == 'O')
		{
			c[i] = '0';
		}
		while (c[i] == 't' || c[i] == 'T')
		{
			c[i] = '7';
		}
		while (c[i] == 'l' || c[i] == 'L')
		{
			c[i] = '1';
		}
		while
		{
			c[i] = c[i];
		}
		i++;
	}
	return (c);
}
