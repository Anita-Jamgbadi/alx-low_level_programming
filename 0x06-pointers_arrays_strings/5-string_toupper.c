#include "main.h"

/**
 * string_toupper - changes lowercase to highercase
 * @c: string
 * Return: string
 */

char *string_toupper(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] = c[i] - 32;
		}
		else
		{
			c[i] = c[i];
		}
		i++;
	}
	return (c);
}
