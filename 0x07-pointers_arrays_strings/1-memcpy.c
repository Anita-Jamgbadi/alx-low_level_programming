#include "main.h"

/**
 * _memcpy - copies n bytes from src to dest
 * @src: src
 * @dest: dest
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
