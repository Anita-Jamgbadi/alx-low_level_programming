#include "main.h"

/**
 * memset - fills first n bytes of *s with const b
 * @s: src
 * @b: const byte
 * @n: no of bytes to fill
 * Return: @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
