#include "main.h"

/**
 * swap_int: swaps the values of two integers
 * @a: first value
 * @b: second value
 * @c: for storing the values of one of the variables
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
