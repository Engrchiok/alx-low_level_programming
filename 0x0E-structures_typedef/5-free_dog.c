#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function definition that frees dogs.
 * @d: function parameter.
 * Return: nothing.
 */

void free_dog(dog_t *d)
{
	free(d);
}
