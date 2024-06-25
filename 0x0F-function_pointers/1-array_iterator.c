#include "function_pointers.h"

/**
 * array_iterator - executes a function given
 * @array: an array
 * @size: is the size of the array
 * @action: is a pointer to the function you need to use
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
