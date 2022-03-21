#include "main.h"

/**
 * rev_string - reverses a string
 * @s: variable
 * Return: Always 0
 */

void rev_string(char *s)
{
	int size = _strlen(s);
	while (size >= 0)
	{
		_putchar(s[size--]);
	}

	_putchar('\n');
}
