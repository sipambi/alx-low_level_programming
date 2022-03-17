#include "main.h"

/**
 * print_numbers - print numbers up to 9
 * Return: 0 if successful
 */

void print_numbers(void)
{
	int c;

	for(c = 48; c <= 57; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
