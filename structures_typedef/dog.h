#ifndef DOG_H
#define DOG_H

/**
 * struct dog - info about a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: I'm not sure what this is going to do yet!
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
