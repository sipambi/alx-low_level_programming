#include <stdlib.h>
#include <stdio.h>

/**
 * main - writing alphabet in uppercase then lowercase
 * Return: 0 if exited properly
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
