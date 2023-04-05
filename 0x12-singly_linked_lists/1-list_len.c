#include <stdlib.h>
#include "lists.h"

/**
  * list_len - return number of elements in a linked list.
  * @h: pointer to structure.
  * Return: number of elements in list_t list
  */

size_t list_len(const list_t *h)
{
	const list_t *temp = h;
	int elementsCounter = 0;

	while (temp != NULL)
	{
		elementsCounter++;
		temp = temp->next;
	}
	return (elementsCounter);
}
