#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initialize the structure of a dog
 * @d: The struncture of a dog
 * @name: Dog name
 * @age: Dog age.
 * @owner: Dog owner.
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
