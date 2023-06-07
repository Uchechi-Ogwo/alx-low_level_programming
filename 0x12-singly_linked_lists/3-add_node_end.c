#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * Description: adds a new node at the end of
 * a list_t list.
 * @head: a pointer to the head of the list_t list.
 * @str: the string to be added to the list_t list
 * Return: If the function fails - NULL.
 * Otherwise - the address of the new element.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *name;
	int len;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	name = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = name;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}

