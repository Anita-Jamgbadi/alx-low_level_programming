#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 * and a new line
 * Return: 0 always
 */

void print_alphabet(void)
{
	char currentLetter;

	currentLetter = 'a';

	while (currentLetter <= 'z')
	{
		_putchar(currentLetter);
		currentLetter++;
	}
	_putchar('\n');
}
