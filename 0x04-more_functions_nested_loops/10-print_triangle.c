#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line
 * @size: size of triangle to be printed
 */

void print_triangle(int size)
{
	int height, width, hash;

	if (size <= 0)
		_putchar('\n');

	for (height = 0; height < size; height++)
	{
		hash = 0;
		for (width = 0; width < size; width++)
		{
			
			while (width < size - (height + 1))
			{
				_putchar(' ');
				width++;
			}
			while (width == size - (height + 1) && hash < height + 1)
			{
				_putchar('#');
				hash++;
			}
		}
		_putchar('\n');
	}
}
