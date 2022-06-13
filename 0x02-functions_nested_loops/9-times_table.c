#include "main.h"

/**
 * times_table - prints the 9 times table from 0
 */

void times_table(void)
{
	int row;
	int col;
	int res;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			if (col <= 0)
			{
				res = col;
				_putchar(res);
			};

			if (col > 0)
			{
				res = col * row;
				_putchar(res);
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

