#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - this is a fucntion that initialises struct dog
 * @d: struct dog
 * @name: string for name
 * @age: integer for age
 * @owner: string for owners
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner
	}
}
