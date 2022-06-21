#include "main.h"
#include <stddef.h>

/**
 * _strchr - finds @c in *s
 * @s: library
 * @c: book
 * Return: *s
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		if (s[i] != c && s[i++] == '\0')
		{
			return (&s[i++]);
		}
		else
		{
			continue;
		}
		i++;
	}
	return (NULL);
}
