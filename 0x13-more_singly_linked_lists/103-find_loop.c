#include "lists.h"
#include <stdio.h>
/**
 * find_listint_loop - function that finds the loop in a linked list
 * @head: Pointer
 * Return: Address of the node where loop starts
 * NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *list1 = head;
	listint_t *list2 = head;

	while (list2 && list1 && list1->next)
	{
		list1 = list1->next->next;
		list2 = list2->next;
		if (list2 == list1)
		{
			list2 = head;
			while (list1 != list2)
			{
				list1 = list1->next;
				list2 = list2->next;
			}
			return (list2);
		}
	}
	return (NULL);
}
