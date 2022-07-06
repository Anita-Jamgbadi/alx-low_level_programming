#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * printer - prints a string
 * @name: name to be printed
 */

void printer(char *name)
{
	printf("%s\n", name);
}

/**
 * print_name - Accepts a pointer to a function and prints a name
 * @name: name to be printed
 * @f: function that prints name
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

/**
 * main - holds @f, and functions to print a string
 * Return: 0
 */

int main(void)
{
	void (*ptr)(char *);
	char *name;

	ptr = printer;
	print_name(name, ptr);
	return (0);
}


