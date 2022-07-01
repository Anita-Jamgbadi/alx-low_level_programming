#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_count - counts the number of chars in a string
 * @s2: string to count
 * Return: number of chars in string
 */

int string_count(char *s2)
{
	int i;

	i = 0;
	while (s2[i] != '\0')
	{
		i++;
	}
	return (i);
}
		
/**
 * string_nconcat - concat @n bytes of @s2 to @s1
 * @n: number od bytes to use. If n >= length of s2,
 * the entire s2 string is used. if n is null, s2 is an empty string
 * @s1: original string
 * @s2: string to be appended
 * Return: ptr to new and improved s1, or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, k;
	int j;
	char *ptr;

	ptr = malloc(sizeof(s1));
	if (!ptr)
		return (NULL);
	if (s2 == NULL)
	{
		j = 0;
		*s2 = atoi("");
		while (s1[j] != '\0')
		{
			j++;
		}
		s1[j++] = *s2;
		s1[j++] = '\0';
	       return (ptr);	
	}
	else
		i = string_count(s2);
	if (i < n)
	{
		j = 0;
		while (s1[j] != '\0')
		{
			j++;
		}
		k = 0;
		while (k <= i)
		{
			s1[j++] = s2[k];
			k++;
		}
		s1[j++] = '\0';
		return (ptr);
	}
	else if (i > n)
	{
		j = 0;
		while (s1[j] != '\0')
		{
			j++;
		}
		i = 0;
		while (i <= n && s2[n] != '\0')
		{
			s1[j++] = s2[i];
			i++;
		}
		s1[j++] = '\0';
		return (ptr);
	}
	return (NULL);
}
		
