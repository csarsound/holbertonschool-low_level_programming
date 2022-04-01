#include "lists.h"
/**
 * free_listint - function that frees listint_t list.
 * @head: first element
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *nodo;

	if (head == NULL)
	{
		return;
	}

	while (head != NULL)
	{
		nodo = head;
		head = nodo->next;
		free(nodo);
	}
	head = NULL;
}
