#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: first argument
 * Return: integer
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i, sum = 0;

	va_start(ap, n);
	if (n == 0)
		return (0);
	for (i 0; i < n; i++)
		sum += va_arg(ap, int);
	var_end(ap);
	return (sum);
}
