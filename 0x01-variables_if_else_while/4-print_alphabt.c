#include <stdio.h>

/**
 * main - Required
 * Return: 0
 */

int main(void)
{
	char c;

	c = 'a';

	while (c <= 'z' && c != 'q' && c != 'e')
	{
		if (c == 'e' || c == 'q')
		{
		}
		else
		{
			putchar(c);
		}
		
		c++;
	}
	putchar('\n');
	return (0);
}
