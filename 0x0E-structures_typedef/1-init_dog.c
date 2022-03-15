#include "dog.h"

/**
 * init_dog - initialize a struct.
 * @d: pointer
 * @name: char
 * @age: float
 * @owner: charTwo
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
