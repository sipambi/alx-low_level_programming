#include "main.h"

/**
 * _memcpy - copies memory data
 * @dest: destination
 * @src: source
 * @n: no. of bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int n;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
