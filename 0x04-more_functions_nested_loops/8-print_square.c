#include "main.h"

/**
 * print_square - draw a square
 * @size: variable for characters qty
 * Return: void
 */

void print_diagonal(int size)
{
	int c = 0;
	int x = 0;

	if (size > 0)
	{
		for (c = 0; c < size; c++)
		{
			for (x = 0; x < size; x++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
