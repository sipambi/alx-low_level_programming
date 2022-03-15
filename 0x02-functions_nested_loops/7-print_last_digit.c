#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n : is the number with last digit to be printed
 * Return: returns the last digit
 */

int print_last_digit(int n)
{
	int lastDigit = n % 10;

	if (n < 0)
		lastDigit = lastDigit * -1;

	_putchar(lastDigit + 48);

	return (lastDigit);
}
