#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - function definition that prints struct dog data types.
 * @d: function parameter.
 * Return: always void.
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		d->name == NULL? printf("Name: (nil)\n"): printf("Name: %s\n", d->name);
		d->age == 0? printf("Age: (nil)\n"): printf("Age: %.6f\n", d->age);
		d->owner == NULL? printf("Owner: (nil)\n"): printf("Owner: %s\n", d->owner);
	}
}
