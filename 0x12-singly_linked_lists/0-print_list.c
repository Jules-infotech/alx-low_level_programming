#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all elements of a list_t list.
 *
 * @h: pointer to struct list_t.
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);
}
