#include "main.h"

/**
 * _strlen_recursion - returns the length of a string;
 * @s: string to be counted;
 * Return: length of @s;
 */

int _strlen_recursion(char *s)
{
	int i;
	char *tmp;

	i = 0;

	if (*s != '\0')
	{
		i++;
		tmp = s++;
		_strlen_recursion(tmp);
	}
	return (i);
}
