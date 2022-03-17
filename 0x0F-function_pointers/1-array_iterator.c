#include  "function_pointers.h"
#include  <stddef.h>

/**
 * array_iterator - function
 * @array: int array
 * @size: size
 * @action: integer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array && action)
	{
		for (; i < size; i++)
		{
			action(array[i]);
		}
	}
}
