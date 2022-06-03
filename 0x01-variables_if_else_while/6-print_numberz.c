#include <stdio.h>

/**
 * main - Required
 * Return: 0;
 */

int main(void)
{
	int n;

	n = 0;

	while (n < 10)
	{
		putchar(n % 10 + '0');
		n++;
	}
	putchar('\n');
	return (0);
}
