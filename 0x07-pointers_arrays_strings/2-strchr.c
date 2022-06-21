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
	char *ptr;

	i = 0;
	for (len = 0; *s != '\0'; s++)
	{
		len++;
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			ptr = &s[i];
			break;
		}
		if (s[i] != c && s[i] == s[len])
		{
			ptr = NULL;
			break;
		}
		else
		{
			continue;
		}
	}
	return (ptr);
}
