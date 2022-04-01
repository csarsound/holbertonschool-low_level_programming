#include "lists.h"
/**
 * get_nodeint_at_index - That returns the nth node of a listint_t linked list.
 * @index: Index
 * @head:  Node
 * Return: NtH Node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *nodo;

	if (head != NULL)
	{
		nodo = head;
		for (i = 0; i < index; i++)
		{
			if (nodo == NULL)
			{
				return (NULL);
			}
			nodo = nodo->next;
		}
		return (nodo);
	}
	return (NULL);
}
