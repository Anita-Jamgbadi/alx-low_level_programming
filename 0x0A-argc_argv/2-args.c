#include "main.h"
#include <stdio.h>

/**
 * main - Print all arguments recieved on a new line
 * @argc: argument counter
 * @argv: argumenr vector
 * Return: EXIT_SUCCESS
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argsc; i++)
	{
		printf("%d\n", argv[i]);
	}
	return (EXIT_SUCCESS);
}
