#include "lists.h"
#include <stdlib.h>

/**
 * free_list -  frees a list_t list.
 * @head: a pointer to the list_t list.
 */

void free_list(list_t *head)
{
	list_t *present_node;

	while (head)
	{
		present_node = head->next;
		free(head->str);
		free(head);
		head = present_node;
	}
}
