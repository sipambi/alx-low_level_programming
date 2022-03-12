#include <stdlib.h>
#include <stdio.h>

/**
 * main - writing numbers in ascending order
 * Return: 0 if exited properly
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number ++)
	{
		putchar(number + 48);
		if(number != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
