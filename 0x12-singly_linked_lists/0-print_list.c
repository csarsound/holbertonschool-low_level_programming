#include "lists.h"
/**
 * print_list - Function that print alls elements of a list
 * @h: Nodes
 * Return: Elements
 */

size_t print_list(const list_t *h)
{
	int i;
	const list_t *nodo = h;

	for (i = 0; nodo != NULL; i++)
	{
		if (nodo->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", nodo->len, nodo->str);
		}
		nodo = nodo->next;
	}
	return (i);
}
