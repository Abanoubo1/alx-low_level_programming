#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - init dog struct.
 *
 * @d: pointer to struct dog.
 * @name: input dog name.
 * @age: input dog age.
 * @owner: input dog owner.
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	(*d).age = age;
	d->owner = owner;
}
