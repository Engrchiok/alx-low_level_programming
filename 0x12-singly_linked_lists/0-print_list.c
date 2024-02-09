#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: function parameter.
 * Return: returns a.
 */

size_t print_list(const list_t *h)
{
	size_t a;

	for (a = 0; h != NULL; a++)
	{
		if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
	}
		else
		{
			printf("[%u] %s\n", 0, "(nil)");
			h = h->next;
		}
	}
	return (a);
}
