#include <stdio.h>
#include "main.h"

/**
 * main - prints putchar
 * Return: returns 0 if everything is okay
 */
int main(void)
{
	char text[9] = "_putchar";
	int i = 0;

	while(i<8)
	{
		_putchar(text[i]);
		i++;;
	}
	_putchar('\n');
	return (0);
}
