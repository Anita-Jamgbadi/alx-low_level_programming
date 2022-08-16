#include <stdio.h>

/**
 * fizz_buzz - prints 0 - 100, But for multiples of three
 * print Fizz instead of the number and for the multiples of five print Buzz.
 * For numbers which are multiples of both three and five print FizzBuzz
 *
 * Return: 100
 */

int main(void)
{
	int i = 1;

	while (i < 101)
	{
		if (i % 5 == 0 && i % 3 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0 && i % 5 != 0)
			printf("Fizz ");
		else if (i % 5 == 0 && i % 3 != 0)
			printf("Buzz ");
		else
			printf("%d ", i);
		i++;
	}
	return (i);
}
