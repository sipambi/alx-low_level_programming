#include "main.h"

/**
 * _isupper() - checks for uppercase character
 * Return: 1 if c is uppercase and 0 otherwise
 */

int _isupper(int c)
{
	if (c + 48 >= 'A' ) && (c + 48 <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
