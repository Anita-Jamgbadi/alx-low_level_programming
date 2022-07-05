#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initialize new dog structure
 * @d: point to new dog
 * @name: point to dog name
 * @age: point to dog age
 * @owner: point to dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		d->age = age;
		d->owner = owner;
	}
}
