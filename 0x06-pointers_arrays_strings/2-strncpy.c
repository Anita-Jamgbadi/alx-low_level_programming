#include "main.h"

/**
 * *_strncpy - copies n bytes of src to dest
 * @src: src
 * @dest: dest
 * @n: no of bytes
 * Return: dest
 */

char *_strncpy(char *dest, const char *src, int n)
{
	int i;
	
	for (i = 0; i < n && src[i] != '\0'; i++)
		 dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	
	return dest;
			    
}
