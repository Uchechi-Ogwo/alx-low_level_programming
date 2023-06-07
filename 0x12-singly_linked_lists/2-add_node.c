#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of
 * a list_t list.
 * Description: add a new node at the beginning of
 * a list_t list.
 * @head: a pointer to the head of list_t list.
 * @str: the string to be added to the list_t list.
 * Return: If the function fails - NULL;
 * Otherwise - the address of the new element.
 */

list_t *add_node(list_t **head, const char *str)
{
	char *name;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	name = strdup(str);
	if (name == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = name;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
