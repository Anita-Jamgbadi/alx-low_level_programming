#include "main.h"

/**
 * _strcmp - compares @s1 and @s2
 * @s1: string
 * @s2: string
 * Return: s1: <0 - s1<s2;  1 s1=s2, >0 s1>s2
 */

int _strcmp(char *s1, char *s2)
{
	int i, j, res;

	i = 0;
	j = 0;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}

	if (i < j)
	{
		res = -1;
	}
	else if (i == j)
	{
		res = 0;
	}
	else if (i > j)
	{
		res = 1;
	}
	return (res);
}
