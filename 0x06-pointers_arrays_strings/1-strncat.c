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
	int i, destCount, k;

	for (i = 0; dest[i] != '\0'; i++)
	{
		destCount++;
	}

	dest[destCount] = ' ';

	for (k = 0; k <= n; k++, destCount++)
	{
		dest[destCount] = src[k];
	}

	dest[destCount] = '\0';
	return (dest);
}
