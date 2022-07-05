#ifndef DOG_H
#define DOG_H

/**
 * struct dog - contains members of dog
 * @name: name
 * @age: age
 * @owner: owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} doggie;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
