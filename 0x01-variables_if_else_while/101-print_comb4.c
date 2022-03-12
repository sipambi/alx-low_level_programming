#include <stdlib.h>
#include <stdio.h>

/**
 * main - combinations of three digits
 * Return: 0 if exited properly
 */
int main(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = 1; b < 10; b++)
		{
			for (c = 2; c < 10; c++)
			{
				if (c > b && b > a)
				{
					putchar(a + 48);
					putchar(b + 48);
					putchar(c + 48);
					if (a != 7 || b != 8)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
