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
		if (c[0] >= 'a' && c[0] <= 'z')
		{
			c[0] = c[0] - 32;
		}

		if (c[i] == ' ' || c[i] == '\t' || c[i] == '\n' || 
				c[i] == ',' || c[i] == '.' || c[i] == '!' || 
				c[i] == '?' || c[i] == '"' || c[i] == '(' || 
				c[i] == ')' || c[i] == '{' || c[i] == '}' || 
				c[i] == ';')
		{

			if (c[i + 1] >= 'a' && c[i + 1]<= 'z')
			{
				c[i + 1] = c[i + 1] - 32;
			}
		}
		i++;
	}
	return (c);
}
