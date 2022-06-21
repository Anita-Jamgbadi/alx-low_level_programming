#include "main.h"

/**
 * _strspn - find how many bytes of *s only contain
 * bytes fromaccept
 * @s: library
 * @accept: book
 * Return: n
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n, i, res;

	n = 0;
	i = 0;
	while (s[n] != '\0')
	{
		while (accept[i] != '\0')
		{
			if (accept[i] == s[n])
				res = n + 1;
			i++;
		}
		n++;
	}
	return (res);
}
