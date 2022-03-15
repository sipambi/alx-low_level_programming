#include "main.h"

/**
 * print_alphabet_x10 - print alphabet
 * Return: returns 0 if everything is okay
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char letter = 'a';

	for(i = 0; i < 10; i++)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
	}
	_putchar('\n');
}
