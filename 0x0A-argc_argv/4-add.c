#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add positive numbers
 * @argc: counter
 * @argv: vector
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int res, i;

	if (argc < 3)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) >= 0 && isdigit(atoi(argv[i])))
		{
			res += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", res);
	return (0);
}
