#include "main.h"

/**
 * _isalpha - checks for lowercse and uppercase character
 * @c : is the character to be checked
 * Return: returns 1 if c is lowercase or uppercase returns 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
