#include "main.h"

/**
 * print_line - draw straight line in the terminal
 * @n: variable for no. of lines
 * Return: void
 */

void print_line(int n)
{
	int c = 0;

	if (n > 0)
	{
		for (c = 0; c < n; c++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
