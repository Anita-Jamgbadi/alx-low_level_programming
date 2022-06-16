#include "main.h"

/**
 *_strcat - concatenates @src to @dest string
 *@dest: original string
 *@src: to be appended to @dest
 *Return: @dest, but this time pointing to the concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i, k, destCount;

	for (i = 0; dest[i] != '\0'; i++)
	{
		destCount++;
	}
	
	for (k = 0; src[k] != '\0'; k++)
	{
		dest[destCount++] = src[k];
	}

	dest[destCount] = '\0';

	return (dest);
}
