#include "search_algos.h"

/**
 * binary_search - search the index localisation for the value
 * @array: array
 * @size: size of the array
 * @value: the value for find
 * Return: mid or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t mid = size / 2;
	size_t left = 0;
	size_t right = size - 1;
	size_t index;

	if (array == NULL)
	return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (index = left; index < right; index++)
		{
			printf("%d, ", array[index]);
		}
		printf("%d\n", array[index]);
		mid = (left + right) / 2;
		if (array[mid] < value)
		{
			left = mid + 1;
		}
		else if (array[mid] > value)
		{
			right = mid - 1;
		}
		else
		{
			return (mid);
		}
	}
	return (-1);
}
