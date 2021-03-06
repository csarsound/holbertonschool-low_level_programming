#include "lists.h"

/**
 * delete_nodeint_at_index - Delete node at index of a list in head
 * @head: head of list
 * @index: Number for delete node
 * Return: 1 = SUCCESS, -1 FAIL
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *backup, *ptr;

	if (head && *head)
	{
		if (index == 0)
		{
			backup = *head;
			*head = (*head)->next;
			free(backup);
			return (1);
		}
		ptr = *head;
		for (count = 1; ptr; count++)
		{
			if (count == (index))
			{
				backup = ptr;
				ptr = ptr->next;
				backup->next = ptr->next;
				free(ptr);
				return (1);
			}
			ptr = ptr->next;
		}
		return (-1);
	}
	return (-1);
}
