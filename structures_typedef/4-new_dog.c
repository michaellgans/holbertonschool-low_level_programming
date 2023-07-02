#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - who dis?
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 * Return: dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	/* define variables */
	dog_t *new_dog_who_dis;
	/* assign memory to new dog */
	new_dog_who_dis = malloc(sizeof(dog_t));
	if (new_dog_who_dis == NULL)
		return (NULL);
	/* link new dog to data points */
	new_dog_who_dis->name = name;
	new_dog_who_dis->age = age;
	new_dog_who_dis->owner = owner;

	return (new_dog_who_dis);
}
