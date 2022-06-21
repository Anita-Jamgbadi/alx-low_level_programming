#include "main.h"

/**
 * print_chessboard - print chessboard
 * @a: pointer
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	i = j = 0;
	while (i < 8)
	{
		while (*a[j] != '\0')
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
