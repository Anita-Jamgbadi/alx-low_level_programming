#include "main.h"
#include <stdio.h>

/**
 * main - Prints out the number of arguments passed to it
 * @argc: counter
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc && argv)
	{
		printf("%d\n", argc);
	}
	return (0);
}
