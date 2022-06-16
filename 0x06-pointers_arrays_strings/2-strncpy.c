#include "main.h"

/**
 * _strncpy - copies n bytes of src to dest
 * @src: src
 * @dest: dest
 * @n: no of bytes
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	if (n < 0)
	{
		dest[0] = '\0';
	}
	else
	{
		for (i = 0; src[i] != '\0' && i < n; i++)
		{
			dest[i] = src[i];
		}

		dest[i] = '\0';
	}
	return (dest);
}
