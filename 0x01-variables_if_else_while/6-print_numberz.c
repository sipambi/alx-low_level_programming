#include <stdlib.h>
#include <stdio.h>

/**
 * main - writing numbers to base 10
 * Return: 0 if exited properly
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar(number + 48);
	}
	putchar('\n');
	return (0);
}
