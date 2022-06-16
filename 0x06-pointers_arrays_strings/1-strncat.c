#include "main.h"

/**
 * _strncat - Strncat concats n characters from @src to @dest
 * @src: src
 * @dest: dest
 * @n: int
 * Return: @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, k;

	for (i = 0; dest[i] != '\0'; i++)
	;

	if (n >= 0)
	{
		for (k = 0; k <= n; k++)
		{
			dest[i] = src[k];
			i++;
		}
	}

	if (src[0] != '\0')
		dest[i] = '\0';

	return (dest);
}
