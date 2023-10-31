#include "lists.h"
#include <stdio.h>
/**
 * free_listint_safe - function that frees a list
 * @h: Pointer
 * Return: Size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *tmp;

	while (*h && *h > (*h)->next)
	{
		tmp = (*h)->next;
		free(*h);
		*h = tmp;
		++count;
	}
	if (*h)
	{
		free(*h);
		++count;
	}
	*h = NULL;
	return (count);
}
