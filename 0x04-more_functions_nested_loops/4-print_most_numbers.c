#include "main.h"

/**
 * print_most_numbers - print numbers up to 9
 *
 * Return: 0 void
 */

void print_most_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		if (c != '2' || c != '4')
			_putchar(c);
	}
	_putchar('\n');
}
