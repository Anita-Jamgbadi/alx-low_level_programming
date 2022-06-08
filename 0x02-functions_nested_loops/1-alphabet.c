#include "main.h"

/**
 * main - Prints the alphabet in lowercase
 * and a new line
 * Return: 0 always
 */

int main(void)
{
	char currentLetter;
	currentLetter = 'a';

	while (currentLetter <= 'z')
	{
		_putchar(currentLetter);
		currentLetter++;
	}
	_putchar('\n');
	return (0);
}
