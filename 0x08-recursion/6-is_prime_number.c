#include "main.h"

/**
 * divisors - number is prime
 * @n: integer
 * @m: integer
 * Return: boolean
 */

int divisors(int n, int m)
{
	if (m % n == 0)
	{
		return (0);
	}
	else if (m / 2 > n)
		return (divisors(n + 2, m));
	else
		return (1);
}

/**
 * is_prime_number - checksfor a prime number
 * @n: integer
 * Return: 1 if n is integer and 0 otherwise
 */

int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
		return (0);
	else
		return (divisors(3, n));
}
