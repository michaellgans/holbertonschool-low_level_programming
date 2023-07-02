#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes variables
 * struct dog - the structure
 * @d: pointer to dog?
 * @name: pointer to name
 * @age: the age
 * @owner: the owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		printf("OK\n");
	d->name = name;
	d->age = age;
	d->owner = owner;
}
