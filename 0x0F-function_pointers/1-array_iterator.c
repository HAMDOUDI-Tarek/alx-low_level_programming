#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - function on elements.
 * @array: the array.
 * @size: array size.
 * @action: pointer to function.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
