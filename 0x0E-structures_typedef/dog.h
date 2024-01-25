#ifndef DOG_H
#define DOG_H

/**
 * struct dog - name of structure type definition.
 * @name: struct character string variable.
 * @age: struct float variable.
 * @owner: struct character string variable.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
	char null;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
