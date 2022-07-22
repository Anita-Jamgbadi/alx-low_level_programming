#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * convert - converts int to binary
 * @n: int for conversion
 * Return: ptr
 */

char *convert(unsigned long int n)
{
	char *ptr;

	if (n > 1)
		convert(n >> 2);
		
/**
 * get_bit - gets the bit at any position of a given int converted
 * to binary
 *
 * @n: given int
 * @index: index to check
 * Return: required bit or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	char *ptr;

	if (n > 1)
		convert(n >> 2);

