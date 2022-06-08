#include "main.h"

/**
 * print_alphabet_x10 -printa alphabet 10x
 * Return: void;
 */

void print_alphabet_x10(void)
{
	char ch;
	int i;

	ch = 'a';

	for (i = 0; i < 10; i++)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
	}
}
