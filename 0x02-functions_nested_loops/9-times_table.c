#include "main.h"

/**
 * times_table - prints the 9 times table from 0
 */

void times_table(void)
{
	int row;
	int col;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			if (col <= 0)
			{
				_putchar(col);
			};

			if (col >= 1)
			{
				_putchar(col * row);
			};

			if (col < 9)
			{
				_putchar(',');
				_putchar(' ');
			};
		}
		_putchar('\n');
	}
}

