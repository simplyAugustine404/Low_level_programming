#include "lists.h"

/**
 * list_len - returns number of elemnts in a list
 * @h: singly linked list
 * Return: number of elemnts
 */

size_t list_len(const list_t *h)
{
	size_t nelem;

	nelem = 0;
	while (h != NULL)
	{
		h = h->next;
		nelem++;
	}
	return (nelem);
}
