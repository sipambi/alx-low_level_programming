#include <stdlib.h>
#include <stdio.h>

/**
 * main - writing alphabet in reverse
 * Return: 0 if exited properly
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
