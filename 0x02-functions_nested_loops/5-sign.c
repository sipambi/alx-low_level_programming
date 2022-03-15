#include "main.h"

/**
 * print_sign - prints sign of a number
 * @n : is the number to be checked
 * Return: returns 1  if n > 0, returns 0 if n == 0 and return -1 if n < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
