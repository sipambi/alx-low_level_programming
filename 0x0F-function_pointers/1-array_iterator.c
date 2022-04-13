#include "function_pointers.h"

/**
 * array_iterator - executes a fxn given as a parameter
 * @array: array
 * @size: size
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (!array || !action)
		return;

	for (x = 0; x < size; x++)
		action(array[x]);
}
