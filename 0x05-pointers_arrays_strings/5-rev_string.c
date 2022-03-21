#include "main.h"

/**
 * rev_string - reverses a string
 * @s: variable
 * Return: Always 0
 */

void rev_string(char *s)
{
	int i = 0;
	int size = 0;
	char newString[] = *s;

	while (s[size] = 0)
	{
		size++;
	}
	size--;
	while (size >= 0)
	{
		s[i] = newString[size];
		i++;
		size--;
	}

	_putchar('\n');
}
