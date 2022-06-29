#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings using malloc
 * @s1: string 1
 * @s2: string 2
 * Return: NULL or ptr
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j, k, l, fill;

	if (s1 == NULL && s2 == NULL)
	{
		ptr = "";
		return (ptr);
	}
	i = j = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	j++;

	k =  i + j;

	ptr = malloc(k * sizeof(char));
	if (!ptr)
		return (NULL);
	for (fill = 0; s1[fill] != '\0'; fill++)
	{
		ptr[fill] = s1[fill];
	}
	l = 0;
	while (fill < k)
	{
		ptr[fill] = s2[l];
		fill++;
		l++;
	}
	ptr[fill] = '\0';
	return (ptr);
}
