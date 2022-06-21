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
	int i, len;

	i = 0;
	for (len = 0; *s != '\0'; s++)
	{
		len++;
	}

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		if (s[i] != c && s[i] == s[len])
		{
			return (NULL);
		}
		else
		{
			continue;
		}
		i++;
	}
	return (NULL);
}
