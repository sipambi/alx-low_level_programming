#include "main.h"

/**
 * main - print alphabet
 * Return: returns 0 if everything is okay
 */
void print_alphabet(void)
{
	char i = 'a';
	
	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
