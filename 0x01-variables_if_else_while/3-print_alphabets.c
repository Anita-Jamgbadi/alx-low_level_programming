#include <stdio.h>

/**
 * main - Required
 * Return: 0
 */

int main(void)
{
	char a, A;

	a = 'a';
	A = 'A';

	while (a < 'z')
	{
		putchar(a);
		a++;
	}
	while (A < 'Z')
	{
		putchar(A);
		A++;
	}
	putchar('\n');
	return (0);
}
