#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Return the # of elements in a linked inthe list
 * @h: Pointer to the list_t list.
 * Return: Number of elements in h.
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Return the # of elements in a linked inthe list
 * @h: Pointer to the list_t list.
 * Return: Number of elements in h.
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}
