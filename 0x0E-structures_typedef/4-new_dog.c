#include "dog.h"

/**
 * new_dog - function definition that creates a new dog.
 * @name: function parameter.
 * @age: function parameter.
 * @owner: function parameter.
 * Return: always b.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t a, *b;

	a.name = name;
	a.age = age;
	a.owner = owner;
	b = &a;
	return (b);
}
