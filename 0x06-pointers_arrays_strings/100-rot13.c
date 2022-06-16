#include "main.h"

/**
 * rot13 - rotates the input by 13
 * @c: points to string
 * Return: @c
 */

char *rot13(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if ((c[i] >= 'A' || c[i] <= 'Z') || (c[i] >= 'a' || c[i] <= 'z'))
		{
			c[i] = c[i] + 13;
		}
	}
	return (c);
}
