#include "lists.h"
/**
 * listint_len - Returns the number of elements a linked listint_t list.
 * @h: Bring the head
 * Return: i to n.
 */

size_t listint_len(const listint_t *h)
{
	int i;
	const listint_t *nodo = h;

	for (i = 0; nodo != NULL; i++)
	{
		nodo = nodo->next;
	}

	return (i);
}
