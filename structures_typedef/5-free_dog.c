#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - frees dogs
 * @d: pointer to dogs
 */

void free_dog(dog_t *d)
{
	free(d);
}
