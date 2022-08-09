#include "search_algos.h"

/**
 * linear_search - searches using the linear search algoritm
 * @array: array
 * @size: size of the array
 * @value: value for find
 * Return: index
 */

int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (array == NULL)
	return (-1);

	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		if (array[x] == value)
		{
			return (x);
		}
	}
	return (-1);
}
