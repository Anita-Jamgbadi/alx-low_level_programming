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

	k = 0;
	for (i = 0; dest[i] != '\0'; i++)
	{
		destCount++;
	}

	while (src[k] != '\0')
	{
		dest[k] = src[k];
		k++;
	}

	return (dest);
}
