#include "main.h"

/**
 * factorial - returns a factorial of a number
 * @n: number
 * Return: factorial
 */

int factorial(int n)
{
	if ((n == 1) || (n == 0))
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
