#include <stdio.h>

/**
 * main - print all possible combinations
 * of single digit numbers
 * Return: 0
 */

int main(void)
{
	int n;

	n = 0;

	while (n < 10)
	{
		putchar(n);

		if (n <= '8')
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			break;
		}
		n++;
	}
	putchar('\n');
	return (0);
}


