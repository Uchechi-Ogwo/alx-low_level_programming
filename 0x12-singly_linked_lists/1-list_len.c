#include "lists.h"

/**
 * list_len - returns the number of elements
 * in a linked list_t list.
 * Description: finds and rturns the number of elements
 * in a linked list_t list.
 * @h:the linked list_t list.
 * Return: the number of elements in h.
 */

size_t list_len(const list_t *h)
{
	size_t e = 0;

	while (h)
	{
		e++;
		h = h->next;
	}
	return (e);
}
