#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @l: pointer to the list_t list
 *
 * Return: number of elements in l
 */
size_t list_len(const list_t *l)
{
	size_t s = 0;

	while (l)
	{
		s++;
		l = l->next;
	}
	return (s);
}
