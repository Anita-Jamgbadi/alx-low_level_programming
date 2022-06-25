#include "main.h"

/**
 * is_prime_number - Checks for prime number
 * isPrime - evaluate if number is prime
 * @a: int
 * @b: int
 * Return: int
 */

int isPrime(int a, int b);
int is_prime_number(int n)
{
	int i = 2;

	if (i == 1)
	{
		return (1);
	}
	return (isPrime(i, n));
}

/**
 * isPrime - evaluate if number is prime
 * @a: int
 * @b: int
 * Return: int
 */

int isPrime(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	else if (a > b / 2)
		return (1);
	else
		return (isPrime(a + 1, b));
}
