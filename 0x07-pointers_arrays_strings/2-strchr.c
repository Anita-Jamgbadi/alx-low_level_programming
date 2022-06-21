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
		if (s[i] == c && c != '\0')
		{
			return (&s[i]);
		}
		if (c == '\0' && s[i++] == '\0')
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
