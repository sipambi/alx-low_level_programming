#include "functions_pointers.h"

/**
 * array_iterator -executes a fxn given as a parameter
 * @array: array
 * @size_t: size
 * @action: pointer to functio
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (!array || !action)
		return;

	for (x = 0; x < size; x++)
		action(array[i]);
}
