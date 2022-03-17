#include "main.h"

/**
 * more_numbers - print numbers up to 14 10 times
 *
 * Return: void
 */

void more_numbers(void)
{
	int c;
	int i = 0;

	while (i < 10)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c >= 10)
				_putchar((c / 10) + 48);
			_putchar((c % 10) + 48);
		}
		i++;
		_putchar('\n');
	}
}
