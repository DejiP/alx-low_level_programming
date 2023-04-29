#include"lists.h"
/**
 * free_list - list_t list.
 * @head: the head node
 *
 *
 *
 * Return: 0
 */

#include "lists.h"

void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}

/*DEJI PAUL */
