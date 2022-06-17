#include "main.h"

/**
 * _strcmp - compares @s1 and @s2
 * @s1: string
 * @s2: string
 * Return: s1: <0 - s1<s2;  1 s1=s2, >0 s1>s2
 */

int _strcmp(char *s1, char *s2)
{
	int i, res;

	i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	res = s1[i] - s2[i];
	return (res);
}
