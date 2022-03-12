#include <stdlib.h>
#include <stdio.h>

/**
 * main - writing numbers in base 16
 * Return: 0 if exited properly
 */
int main(void)
{
	char letter;
	int number;

	for (number = 0; number < 10; number++)
		putchar(number + 48);

	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
