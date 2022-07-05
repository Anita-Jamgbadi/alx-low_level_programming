#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints the properties of a dog structure
 * @d: points to dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		printf(" \n");
	else
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %f", d->age);

		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
