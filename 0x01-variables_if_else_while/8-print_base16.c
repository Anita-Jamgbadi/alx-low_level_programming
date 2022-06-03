#include <stdio.h>

/**
 * main - count base 16
 * Return: 0
 */

int main(void)
{
	int n;
	char c;

	n = 0;
	c = 'a';

	while (n < 16)
	{
		if (n < 10)
		{
			putchar(n % 10 + '0');
		}
		else
		{
			putchar(c);
			c++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
