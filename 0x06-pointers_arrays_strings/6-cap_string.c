#include "main.h"

/**
 * cap_string - to uppercase
 * @c: string
 * Return: @c
 */

char *cap_string(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		if ((c[i] >= 'A' && c[i] <= 'Z') || (c[i] >= 'a' && c[i] <= 'z'))
		{
			if (c[i] >= 'A' && c[i] <= 'Z')
			{
				c[i] = c[i];
			}
			else
			{
				c[i] = c[i] - 32;
			}
		}
		i++;
	}
	return (c);
}
