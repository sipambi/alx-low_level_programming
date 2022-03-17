#include "main.h"

/**
 * print_diagonal - draw diagonal line in the terminal
 * @n: variable for no. of lines
 * Return: void
 */

void print_diagonal(int n)
{
	int c = 0;

	if (n > 0)
	{
		for (c = 0; c < n; c++)
		{
			for (x = 0; x < c; x++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
