#include <stdio.h>
#include "dog.h"

/**
 * init_dog - finction definition for initializing structs.
 * @d: function parameter.
 * @name: function parameter
 * @owner: function parameter.
 * Return: always void.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
