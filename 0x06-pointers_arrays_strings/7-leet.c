#include "main.h"

/**
 * leet - creates code 1337
 * @s: points to string
 * Return: @c
 */

char *leet(char *s)
{
	int stringC, leetC;
	char leetLets[] = "aAeEoOtTlL";
	char leetNum[] = "4433007711";

	stringC = 0;

	while (s[stringC] != '\0')
	{
		leetC = 0;

		while (leetC < 10)
		{
			if (leetLets[leetC] == s[stringC])
			{
				s[stringC] = leetNum[leetC];
			}
			leetC++;
		}
		stringC++;
	}
	return (s);
}
