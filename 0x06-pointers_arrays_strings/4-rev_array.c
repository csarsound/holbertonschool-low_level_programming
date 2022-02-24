#include "main.h"

/**
 * reverse_array - revers integers
 * @a: pointer destination
 * @n: source char cointer
 * Return: main turn
 */

void reverse_array(int *a, int n)
{
	int i, j, k;

	k = n - 1;
	i = 0;

	while (i < k)
	{
		j = a[i];
	       a[i] = a[k];
	       a[k] = j;
	       i++;
	       k--;
	}
}
