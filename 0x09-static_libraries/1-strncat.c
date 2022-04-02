#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: number of bytes
 * Return: returns a char
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;
	
	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (j < n)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}
	
	return (dest);
}
