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
		if ((letter != 'q') || (letter != 'e'))
			putchar(letter);
	}
	putchar('\n');
	return (0);
}
